#include<bits/stdc++.h>
using namespace std;
int binary_Search(vector<int>&arr,int n , int target){
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
        mid = low + ((high-low)/2);
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
        
    }
    return mid;
    
}
int main(){
    int n ;
    cout<<"Enter the size of vector:\n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value:\n";
    cin>>target;
    cout<<"Element found at : "<<binary_Search(arr,n,target);

}