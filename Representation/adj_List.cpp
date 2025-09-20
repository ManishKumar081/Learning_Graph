// //!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
//                            //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

//<---------------------------Undirected Graph---------------------------------->

// #include<bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int main(){
//     int n;
//     cout<<"Enter the number of edges: ";
//     cin>>n;
//     vector<vector<int>>adj(n+1);
//     cout<<"Enter the end vertices of edges: "<<endl;
//     for(int i=0;i<n;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     cout<<"The Adjecency matrix is: "<<endl;
//     for(int i=1;i<=n;i++){
//         int m=adj[i].size();
//         cout<<i<<"-> ";
//         for(int j=0;j<m;j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//<-------------------------------------Directed Graph----------------------->

// //!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
//                            //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

// #include<bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int main(){
//     int n;
//     cout<<"Enter the No. of edges of graph: ";
//     cin>>n;

//     vector<vector<int>>adj(n);
//     cout<<"Enter the end vertices of edges: "<<endl;
//     for(int i=0;i<n;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//     }

//     cout<<"The Adjecency list of directed graph is: "<<endl;
//     for(int i=0;i<n;i++){
//         int m=adj[i].size();
//         cout<<i<<"-> ";
//         for(int j=0;j<m;j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//<------------------------------Weighted Graph----------------->

//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int n;
    cout<<"Enter the No. of edges of graph: ";
    cin>>n;
    vector<vector<pair<int,int>>>adj(n);
    cout<<"Enter the end vertices along with its weight: "<<endl;
    for(int i=0;i<n;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    cout<<"The adjecency list is : "<<endl;
    for(int i=0;i<n;i++){
        int m=adj[i].size();
        cout<<i<<"-> ";
        for(int j=0;j<m;j++){
            cout<<"{"<<adj[i][j].first<<","<<adj[i][j].second<<"}"<<" ";
        }
        cout<<endl;
    }
    return 0;
}