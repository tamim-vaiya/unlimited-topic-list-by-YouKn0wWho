#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int cnt = 0;

void tofh(int n, char from_rod, char to_rod, char aux_rod, vector<pair<char, char>> &v) // fta
{
    if (n == 0)
        return;
    cnt++;
    tofh(n - 1, from_rod, aux_rod, to_rod, v); // fat
    v.push_back({from_rod, to_rod});
    tofh(n - 1, aux_rod, to_rod, from_rod, v); // atf
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<char, char>> v;
    tofh(n, '1', '3', '2', v);
    cout << cnt << nl;
    for (auto x : v)
    {
        cout << x.first << " " << x.second << nl;
    }

    return 0;
}