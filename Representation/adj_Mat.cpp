//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int n,m;
    cout<<"Enter the no.of edges and vertices in the graph: ";
    cin>>n>>m;
    vector<vector<int>>adj_mat(m,vector<int>(m,0));
    cout<<"Enter the end vertices of edges: "<<endl;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj_mat[u][v]=1;
        adj_mat[v][u]=1;
    }
    cout<<"The adjecency matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// in case of directed graph only adj[u][v]=1;
// and in case of weighted graph instead of putting 1 put the weight of edges