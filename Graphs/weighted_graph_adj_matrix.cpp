#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;
    cout<<"Enter the number of edges:"<<endl;
    cin>>m;
    vector<vector<int>>adj(n+1,vector<int>(n+1,0));
    cout<<"Enter the edges and their respective weights:"<<endl;
    for(int i = 0;i<m;i++){
        int u , v , w;
        cin>>u>>v>>w;
        adj[u][v] = w;

    }
    for(int i = 0;i<n+1;i++){
        for(int j =0;j<n+1;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}