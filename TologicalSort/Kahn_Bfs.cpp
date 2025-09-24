//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

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

    //finding indegree of each vertices: 
    vector<int>indegree(n,0);
    for(int i=0;i<n;i++){
        for(auto nbr:adj[i]){
            indegree[nbr]++;
        }
    }

    //inserting all zero indegree into the queue;
    queue<int>qe;
    for(int i=0;i<n;i++){
        if(indegree[i]==0) qe.push(i);
    }

    //traverse in to the queue:
    cout<<"The topological sort is: ";
    while(!qe.empty()){
        int front=qe.front();
        qe.pop();
        cout<<front<<" ";
        for(auto nbr:adj[front]){
            indegree[nbr]--;
            if(indegree[nbr]==0){
                qe.push(nbr);
            }
        }
    }
    cout<<endl;
    return 0;
}