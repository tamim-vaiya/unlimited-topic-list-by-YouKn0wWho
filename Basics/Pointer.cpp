#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void sum(int *a, int *b)
{
    *a = *a + *b;
    cout << *a << nl;
}
void absdif(int *a, int *b)
{
    *b = abs(*b - (*a - *b));
    cout << *b << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    sum(&a, &b);
    absdif(&a, &b);

    return 0;
}