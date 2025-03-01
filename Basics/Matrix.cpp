#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    m = n;
    vector<vector<int>> matrix(n, vector<int>(m));
    int sumM = 0, sumS = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
            if (i == j)
                sumM += matrix[i][j];
            if (i + j == n - 1)
                sumS += matrix[i][j];
        }
    }
    cout << abs(sumM - sumS) << nl;

    return 0;
}