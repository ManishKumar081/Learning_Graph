//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void topo_sort(vector<vector<int>>adj,vector<bool>&vis,stack<int>&st,int start){
    vis[start]=true;
    for(auto nbr:adj[start]){
        if(!vis[nbr]){
            topo_sort(adj,vis,st,nbr);
        }
    }
    st.push(start);
}

int main(){
    int n,m;
    cout<<"Enter the no. of vertices and no. of column: ";
    cin>>n>>m;
    vector<vector<int>>adj(n);
    cout<<"Enter the end vertices of edges: "<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);  //because directed acyclic graph
    }
    vector<bool>vis(n,false);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            topo_sort(adj,vis,st,i);
        }
    }
    cout<<"The topological sort is: ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}