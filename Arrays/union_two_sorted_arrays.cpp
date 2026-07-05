#include <bits/stdc++.h>
using namespace std;
// vector<int> union_two_sorted_arr(int arr1[],int arr2[],int n1,int n2){
//     set<int>st;
//     for(int i=0;i<n1;i++){
//         st.insert(arr1[i]);
//     }
//     for(int i=0;i<n2;i++){
//         st.insert(arr2[i]);
//     }
//     vector<int>temp;
//     for(auto it:st){
//         temp.push_back(it);
//     }
//     return temp;
// }
vector<int> union_two_sorted_arr(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> UnionArr;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (UnionArr.size() == 0 || UnionArr.back() != arr1[i])
            {
                UnionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (UnionArr.size() == 0 || UnionArr.back() != arr2[j])
            {
                UnionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (UnionArr.size() == 0 || UnionArr.back() != arr1[i])
        {
            UnionArr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (UnionArr.size() == 0 || UnionArr.back() != arr2[j])
        {
            UnionArr.push_back(arr2[j]);
        }
        j++;
    }
    return UnionArr;
}
int main()
{
    int n1;
    cout << "Enter the size of first array:" << endl;
    cin >> n1;
    int n2;
    cout << "Enter the size of second array:" << endl;
    cin >> n2;
    int arr1[n1], arr2[n2];
    cout << "Enter the elements of first array:";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of second array:";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> result = union_two_sorted_arr(arr1, arr2, n1, n2);
    cout << "Union of the two sorted arrays is:";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}