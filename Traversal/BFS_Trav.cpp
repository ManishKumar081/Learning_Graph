//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

vector<int>bfs_Trav(vector<vector<int>>adj,int m){
    vector<int>ans;
    vector<bool>vis(m);
    queue<int>qe;
    int start=0;
    qe.push(start);
    vis[start]=true;
    while(!qe.empty()){
        int front=qe.front();
        qe.pop();
        ans.push_back(front);
        for(auto nbr:adj[front]){
            if(!vis[nbr]){
                qe.push(nbr);
                vis[nbr]=true;
            }
        }
    }
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter the no. of edges and no. of vertices in a graph: ";
    cin>>n>>m;
    vector<vector<int>>adj(m);
    cout<<"Enter the end vertices of edges: "<<endl;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>ans=bfs_Trav(adj,m);
    cout<<"The Bfs traversal is: ";
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}