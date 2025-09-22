//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void dfs(vector<vector<int>>&adj,int row,int col){
    int n=adj.size();
    int m=adj[0].size();
    if(row<0 || col<0 || row>=n || col>=m || adj[row][col]==0) return;
    adj[row][col]=0;
    dfs(adj,row-1,col);
    dfs(adj,row+1,col);
    dfs(adj,row,col-1);
    dfs(adj,row,col+1);
}
int main(){
    int n,m;
    cout<<"Enter the no. of row and col: ";
    cin>>n>>m;
    vector<vector<int>>adj(n,vector<int>(m));
    cout<<"Enter the element of grid: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>adj[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(adj[i][j]==1){
                count++;
                dfs(adj,i,j);
            }
        }
    }
    cout<<"The no. of island is : "<<count<<endl;
    return 0;
}