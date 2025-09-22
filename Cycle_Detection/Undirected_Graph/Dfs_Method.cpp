//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

bool Dfs_Trav(vector<vector<int>>&adj,vector<bool>&vis,int start,int parent){
    vis[start]=true;
    for(auto nbr:adj[start]){
        if(!vis[nbr]){
            if(Dfs_Trav(adj,vis,nbr,start)) return true;
        }
        else if(parent != nbr) return true;
        
    }
    return false;
}

int main(){
    int n,m;
    cout<<"Enter the no. of edges and no. of vertices: ";
    cin>>n>>m;
    vector<vector<int>>adj(m);
    cout<<"Enter the end point of edges: "<<endl;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>vis(m,false);
    if(Dfs_Trav(adj,vis,0,-1)){
        cout<<"There is cycle"<<endl;
    }
    else{
        cout<<"there is no cycle."<<endl;
    }
    return 0;
}