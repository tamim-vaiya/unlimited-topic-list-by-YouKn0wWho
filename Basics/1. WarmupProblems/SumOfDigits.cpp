#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char ch[100005];
    cin >> ch;
    int cnt = 0;
    int digit_sum = 0;
    int len = strlen(ch);
    if (len == 1)
    {
        cout << 0 << nl;
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        digit_sum += ch[i] - '0';
    }
    cnt++;

    int n = digit_sum;
    while (n > 9)
    {
        n = sum_of_digits(n);
        cnt++;
    }
    cout << cnt << nl;

    return 0;
}