#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> arr(6, vector<int>(6));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum =
                arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                0 + arr[i + 1][j + 1] + 0 +
                arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            // added 0 here for no reason, I just wanted to make it look like a hourglass
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    cout << max << nl;

    return 0;
}