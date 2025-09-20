//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void allPath(vector<vector<int>>adj,vector<bool>&vis,int start,int end,vector<vector<int>>&ans,vector<int>out){
    out.push_back(start);
    if(start==end){
        ans.push_back(out);
        return;
    }
    vis[start]=true;
    for(auto nbr:adj[start]){
        if(!vis[nbr]){
            allPath(adj,vis,nbr,end,ans,out);
        }
    }
    vis[start]=false;
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
    vector<vector<int>>ans;
    allPath(adj,vis,1,6,ans,{});
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}