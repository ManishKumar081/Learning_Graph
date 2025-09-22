//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

bool Bfs_Trav(vector<vector<int>>adj){
    int m=adj.size();
    vector<bool>vis(m,false);
    queue<pair<int,int>>qe;
    vis[0]=true;
    qe.push({0,-1});
    while(!qe.empty()){
        int node=qe.front().first;
        int parent=qe.front().second;
        qe.pop();
        for(auto nbr:adj[node]){
            if(!vis[nbr]){
                vis[nbr]=true;
                qe.push({nbr,node});
            }
            else if(parent != nbr) return true;
        }
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
    if(Bfs_Trav(adj)){
        cout<<"there is cycle."<<endl;
    }
    else{
        cout<<"there is no cycle."<<endl;
    }
    return 0;
}