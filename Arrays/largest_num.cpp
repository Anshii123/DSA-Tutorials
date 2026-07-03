#include<bits/stdc++.h>
using namespace std;
int largest_num(vector<int>&arr){
    int n = arr.size();
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout<<"Enter the size of the vector\n";
    cin>>n;
    vector<int>arr(n);
    
    cout<<"Enter the elements of vector\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Largest number:"<<largest_num(arr)<<endl;
}