#include <bits/stdc++.h>
using namespace std;

// video link : https://www.youtube.com/watch?v=AxNNVECce8c&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=6&ab_channel=takeUforward

#define nl '\n'
#define ll long long

void printF(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto x : ds)
        {
            cout << x << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << nl;
        return;
    }
    printF(ind + 1, ds, arr, n);
    ds.push_back(arr[ind]);
    printF(ind + 1, ds, arr, n);
    ds.pop_back();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printF(0, ds, arr, n);

    return 0;
}