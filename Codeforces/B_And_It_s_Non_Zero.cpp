#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(200001, vector<int>(19, 0));
void precomp()
{
    for (int i = 1; i <= 200000; i++)
    {
        for (int j = 1 << 18, k = 19; j > 0; j /= 2, k--)
        {
            int bit = (i & j);
            if (bit != 0)
                bit = 1;
            dp[i][k] = bit + dp[i - 1][k];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    precomp();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, n;
        cin >> l >> r;
        n = r - l + 1;
        int ans = 1e6;
        for (int i = 1; i <= 19; i++)
        {
            ans = min(ans, n - (dp[r][i] - dp[l - 1][i]));
        }
        cout << ans << '\n';
    }
    return 0;
}