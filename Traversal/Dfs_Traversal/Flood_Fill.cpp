//!ॐ नमः शिवाय             //! ऊँ कृष्णाय वासुदेवाय हरये परमात्मने।   !//             //!जय माँ भवानी
                           //! प्रणतः क्लेशनाशाय गोविंदाय नमो नमः ।। !//

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void floodFill(vector<vector<int>>&image,int sr,int sc,int currImage,int color){
    int n=image.size();
    int m=image[0].size();
    if(sr<0 || sc<0 || sr>=n || sc>=m) return;
    if(image[sr][sc] != currImage) return;
    image[sr][sc]=color;
    floodFill(image,sr+1,sc,currImage,color);
    floodFill(image,sr-1,sc,currImage,color);
    floodFill(image,sr,sc+1,currImage,color);
    floodFill(image,sr,sc-1,currImage,color);
}

int main(){
    int n,m;
    cout<<"Enter the no. of row and no. of col: ";
    cin>>n>>m;
    vector<vector<int>>image(n,vector<int>(m));
    cout<<"Enter the element of array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>image[i][j];
        }
    }
    int sr,sc;
    cout<<"Enter the value of sr and sc: ";
    cin>>sr>>sc;
    int color;
    cout<<"Enter the value of color: ";
    cin>>color;
    int currColor=image[sr][sc];
    floodFill(image,sr,sc,currColor,color);
    cout<<"The final answer array is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}