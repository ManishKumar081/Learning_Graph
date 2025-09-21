//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void shortest_Path(vector<vector<int>>adj){
    int m=adj.size();
    vector<bool>vis(m,false);
    vector<int>ans;
    vector<int>shortest(m,0);
    int start=0;
    vis[start]=true;
    shortest[start]=0;
    queue<int>qe;
    qe.push(start);
    while(!qe.empty()){
        int front=qe.front();
        qe.pop();
        ans.push_back(front);
        for(auto nbr:adj[front]){
            if(!vis[nbr]){
                qe.push(nbr);
                vis[nbr]=true;
                shortest[nbr]=shortest[front]+1;
            }
        }
    }
    cout<<"Bfs traversal is: ";
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"The shortest path of each vertices from start is : ";
    for(auto val:shortest){
        cout<<val<<" ";
    }
    cout<<endl;
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
    shortest_Path(adj);
    return 0;
}