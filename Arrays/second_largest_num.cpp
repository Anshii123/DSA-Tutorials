#include<bits/stdc++.h>
using namespace std;
// Better Approach
// int second_largest(vector<int>&arr){
//     int n = arr.size();
//     int largest = INT_MIN;
//     int slargest = INT_MIN;
//     for(int i =0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//         if(arr[i]>slargest && arr[i]!= largest){
//             slargest=arr[i];
//         }
//     }
//     return slargest;
// }

// Optimal Approach
int second_largest(vector<int>&arr){
    int n = arr.size();
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i =1;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int main(){
    int n ;
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second largest number is :"<<second_largest(arr)<<endl;
}