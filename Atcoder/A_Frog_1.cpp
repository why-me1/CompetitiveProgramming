#include <bits/stdc++.h>
using namespace std;
int dp[100005];
int jump(vector<int> &v, int i = 0)
{
    if (dp[i] != -1)
    {
        return dp[i];
    }
    if (i == v.size() - 1)
    {
        return 0;
    }
    int cost = INT_MAX;
    for (int j = 1; j <= 2; j++)
    {
        if (i < (int)v.size() - j)
        {
            cost = min(cost, abs(v[i] - v[i + j]) + jump(v, i + j));
        }
    }
    return dp[i] = cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int n, cost = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << jump(a) << '\n';
    return 0;
}