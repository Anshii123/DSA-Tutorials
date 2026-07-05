#include<bits/stdc++.h>
using namespace std;
int upper_bound(int arr[],int n,int target){
    int ans = n;
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]>target){
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int n,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element: ";
    cin>>target;
    int ans = upper_bound(arr,n,target);
    if(ans==n){
        cout<<"Target element is not present in the array and all elements are smaller than target"<<endl;
    }
    else{
        cout<<"The index of first element greater than target is: "<<ans<<endl;
    }
}