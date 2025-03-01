#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    for (auto dir : directions)
    {
        int new_x = x + dir.first;
        int new_y = y + dir.second;
        if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m)
        {
            if (matrix[new_x][new_y] != 'x')
            {
                cout << "no" << nl;
                return 0;
            }
        }
    }
    cout << "yes" << nl;

    return 0;
}