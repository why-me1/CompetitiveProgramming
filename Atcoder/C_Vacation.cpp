#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<ll>> dp(100005, vector<ll>(3));

ll points(vector<vector<ll>> &v, ll n, int i = 0)
{
    if (i == n - 1)
    {
        dp[i][0] = v[i][0];
        dp[i][1] = v[i][1];
        dp[i][2] = v[i][2];
        return max({dp[i][0], dp[i][1], dp[i][2]});
    }
    points(v, n, i + 1);
    dp[i][0] = v[i][0] + max(dp[i + 1][1], dp[i + 1][2]);
    dp[i][1] = v[i][1] + max(dp[i + 1][0], dp[i + 1][2]);
    dp[i][2] = v[i][2] + max(dp[i + 1][0], dp[i + 1][1]);
    return max({dp[i][0], dp[i][1], dp[i][2]});
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << points(v, n) << '\n';
    return 0;
}