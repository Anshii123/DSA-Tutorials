#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;
    cout<<"Enter the number of edges :"<<endl;
    cin>>m;
    vector<pair<int,int>>adj[n+1];
    cout<<"Enter the edges as well as their weight:"<<endl;
    for(int i =0;i<m;i++){
        int u , v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    for(int i = 0;i<n+1;i++){
        cout<<i<<"->";
        for(auto it : adj[i]){
            cout << "(" << it.first << ", " << it.second << ") ";
        }
    }
}
