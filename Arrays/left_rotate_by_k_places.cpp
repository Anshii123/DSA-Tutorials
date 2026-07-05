#include<bits/stdc++.h>
using namespace std;
// Brute force Approach
// int leftRotate(int arr[],int n,int k){
    // k = k%n;
//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=k;i<n;i++){
//         arr[i-k]=arr[i];
//     }
//     for(int i = n-k;i<n;i++){
//         arr[i]=temp[i-(n-k)];
//     }
//     return 0;
// }
int leftRotate(int arr[],int n,int k){
    k = k%n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);   
    reverse(arr,arr+n);
    return 0;
}
int main(){
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of places to left rotate: ";
    cin>>k;
    cout<<"Array before left rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    leftRotate(arr, n, k);
    cout<<endl<<"Array after left rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}