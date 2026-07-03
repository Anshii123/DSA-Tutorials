#include<bits/stdc++.h>
using namespace std;
bool is_Sorted(vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            
        }
        else{
            return false;
        }
    }
    return true;
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
    cout<<"Boolean_value:"<<is_Sorted(arr)<<endl;
}