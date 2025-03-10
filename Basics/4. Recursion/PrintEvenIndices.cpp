#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void printEvenIndices(int n, vector<int> v, int i)
{
    if (i == n)
        return;
    printEvenIndices(n, v, i + 1);
    if (i % 2 == 0)
        cout << v[i] << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    printEvenIndices(n, v, 0);

    return 0;
}