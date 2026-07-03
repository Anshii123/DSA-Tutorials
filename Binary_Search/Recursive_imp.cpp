#include <bits/stdc++.h>
using namespace std;
int binary_Search(vector<int> &arr, int target, int low, int high)
{
    if (low > high)
        return -1;
    int mid = low + ((high - low) / 2);
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binary_Search(arr, target, mid + 1, high);
    }
    else
    {
        return binary_Search(arr, target, low, mid - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the size of vector:\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0;
    int high = n - 1;
    int target;
    cout << "Enter the target value:\n";
    cin >> target;
    int ans = binary_Search(arr, target, low, high);

    if (ans == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
}
