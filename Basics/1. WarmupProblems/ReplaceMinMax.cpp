#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    int mn_idx = -1, mx_idx = -1;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < mn)
        {
            mn = x;
            mn_idx = i;
        }
        if (x > mx)
        {
            mx = x;
            mx_idx = i;
        }
        arr[i] = x;
    }
    swap(arr[mn_idx], arr[mx_idx]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}