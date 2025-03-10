#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void helloRecursion(int i, int n, vector<int> v, int sum, int idx)
{
    sum += v[idx];
    if (idx == n - 1)
    {
        cout << "Case " << i << ": " << sum << nl;
        return;
    }

    helloRecursion(i, n, v, sum, idx + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        helloRecursion(i, n, v, sum, 0);
    }

    return 0;
}