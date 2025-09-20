//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

bool checkNode(vector<vector<int>>adj,vector<bool>&vis,int start,int end){
    if(start==end) return true;
    vis[start]=true;
    for(auto nbr:adj[start]){
        if(!vis[nbr]){
            bool check=checkNode(adj,vis,nbr,end);
            if(check==true) return true;
        }
    }
    return false;
}

int main(){
    int n,m;
    cout<<"Enter the no. of edges and no. of vertices: ";
    cin>>n>>m;
    vector<vector<int>>adj(m+1);
    cout<<"Enter the end vertices of edges: "<<endl;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>vis(m+1,false);
    if(checkNode(adj,vis,1,6)){
        cout<<"There is a path."<<endl;
    }
    else{
        cout<<"Do not have direct path."<<endl;
    }
    return 0;
}