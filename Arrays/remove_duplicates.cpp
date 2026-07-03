#include<bits/stdc++.h>
using namespace std;
// Brute forece Approach
// int remove_dup_count_unique(vector<int>&arr){
//     int n = arr.size();
//     set<int>st;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     int index = 0;
//     for(auto it:st){
//         arr[index]= it;
//         index++;
//     }
//     return index;
// }
int remove_dup_count_unique(vector<int>&arr){
    int n = arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n ;
    cout<<"Enter the size of vector:\n";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the vector elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unique number of elements :"<<remove_dup_count_unique(arr)<<endl;
}