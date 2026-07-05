#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;
    cout<<"Enter the number of edges :"<<endl;
    cin>>m;
    vector<int> adj[n+1];
    cout<<"Enter the edges:"<<endl;
    for(int i =0;i<m;i++){
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    cout<<"Adjacency list:"<<endl;
    for(int i = 0;i<n+1;i++){
        cout<<i<<"->";
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}