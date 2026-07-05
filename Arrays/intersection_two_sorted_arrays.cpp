#include <bits/stdc++.h>
using namespace std;
// Brute force approach
// vector<int> intersection_two_sorted_arr(int arr1[],int arr2[],int n1,int n2){
//     vector<int>ans;
//     int vis[n2] = {0};
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j] && vis[j]==0){
//                 ans.push_back(arr1[i]);
//                 vis[j]=1;
//                 break;
//             }
//             if(arr2[j]>arr1[i]){
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// Optimal approach
vector<int> intersection_two_sorted_arr(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    cout << "Enter the size of second array: ";
    cin >> n2;
    int arr1[n1], arr2[n2];
    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> result = intersection_two_sorted_arr(arr1, arr2, n1, n2);
    cout << "Intersection of the two sorted arrays is: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}