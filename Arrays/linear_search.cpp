#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to be searched: ";
    cin>>target;
    int result=linear_search(arr,target,n);
    if(result==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<result<<endl;
    }
}