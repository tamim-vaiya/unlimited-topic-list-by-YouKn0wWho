#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

bool flag = true;
int n;
vector<int> v(100005);

void palArr(int l, int r)
{
    if (l == n / 2)
        return;
    if (v[l] != v[r])
    {
        flag = false;
    }
    palArr(l + 1, r - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    palArr(0, n - 1);
    (flag) ? cout << "YES" << nl : cout << "NO" << nl;

    return 0;
}