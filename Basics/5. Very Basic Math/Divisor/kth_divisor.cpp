#include <bits/stdc++.h>
#include <set>
using namespace std;

#define nl '\n'
#define ll long long

vector<ll> divisors(ll n)
{
    vector<ll> divs;
    for (int i = 1; 1LL * i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                divs.push_back(i);
            }
            else
            {
                divs.push_back(i);
                divs.push_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    return divs;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> divs = divisors(n);
    if (k > divs.size())
    {
        cout << -1 << nl;
    }
    else
    {
        cout << divs[k - 1] << nl;
    }

    return 0;
}