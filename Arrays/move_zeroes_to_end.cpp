#include<bits/stdc++.h>
using namespace std;

// Brute force Approach
// int move_zeroes_to_end(int arr[],int n){
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
//     for(int i=temp.size();i<n;i++){
//         arr[i]=0;
//     }
//     return 0;
// }

// Optimal Approach
int move_zeroes_to_end(int arr[], int n) {
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
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
    cout<<"Array before moving zeroes to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    move_zeroes_to_end(arr, n);
    cout<<endl<<"Array after moving zeroes to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}