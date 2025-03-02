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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            a[i] = 0;
        else if (x > 0)
            a[i] = 1;
        else
            a[i] = 2;
    }

    for (auto v : a)
    {
        cout << v << " ";
    }

    return 0;
}