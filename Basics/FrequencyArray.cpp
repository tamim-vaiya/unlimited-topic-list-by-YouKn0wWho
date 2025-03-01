#include <bits/stdc++.h>
#include <map>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<int, int> freq;
    for (int i = 1; i <= m; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    for (auto x : freq)
    {
        cout << x.second << nl;
    }

    return 0;
}