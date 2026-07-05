#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;
    cout<<"Enter the number of edges:"<<endl;
    cin>>m;
    // int adj[n+1][n+1] = {0};
    vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
    cout<<"Enter the edges:"<<endl;
    for(int i=0;i<m;i++){
        int u , v;
        cin>>u>>v;
        adj[u][v]=1;
        // In case of directed graph the second line will not execute and added.
        adj[v][u]=1;
    }
    for(int i = 0;i<n+1;i++){
        for(int j = 0 ;j<n+1;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}