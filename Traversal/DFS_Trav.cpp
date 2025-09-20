//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

//<---------------------------Undirected Graph---------------------------------->

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void dfs_Traversal(vector<vector<int>>&adj,vector<bool>&vis,vector<int>&ans,int start){
    vis[start]=true;
    ans.push_back(start);
    for(auto nbr:adj[start]){
        if(!vis[nbr]){
            dfs_Traversal(adj,vis,ans,nbr);
        }
    }
}

int main(){
    int n,m;
    cout<<"Enter the number of edges: ";
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
    vector<int>ans;
    dfs_Traversal(adj,vis,ans,1);
    cout<<"The dfs Traversal is: ";
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}