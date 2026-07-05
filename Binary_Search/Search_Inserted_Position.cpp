#include<bits/stdc++.h>
using namespace std;
int search_inserted_position(vector<int>&nums , int target){
    int n = nums.size();
    int low=0,high = n-1;
    int ans = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]>target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int n ;
    cout<<"Enter the size of the vector:"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the value to be inserted:"<<endl;
    cin>>target;
    int ans = search_inserted_position(nums,target);
    if(ans==n){
        cout<<"Element can not be inserted as all elements are smaller :"<<endl;
    }
    else{
        cout<<"Element should be inserted at :"<<ans<<endl;
    }
}