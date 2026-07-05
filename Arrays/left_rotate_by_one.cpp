#include<bits/stdc++.h>
using namespace std;
int left_rotate_array_by_one(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
        
    }
    arr[n-1]=temp;
    return 0;
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
    cout<<"Array before left rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    left_rotate_array_by_one(arr, n);
    cout<<endl<<"Array after left rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}