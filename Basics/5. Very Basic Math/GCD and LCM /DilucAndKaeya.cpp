#include <bits/stdc++.h>
#include <map>
using namespace std;

// this video helped, I am dumb, I couldn't solve : https://www.youtube.com/watch?v=0i5JuVCOFYY&ab_channel=sKSama

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int cD = 0, cK = 0;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'D')
                cD++;
            else
                cK++;
            int g = gcd(cD, cK);
            int a = cD / g;
            int b = cK / g;
            cout << mp[{a, b}] + 1 << ' ';
            mp[{a, b}]++;
        }
        cout << nl;
    }

    return 0;
}