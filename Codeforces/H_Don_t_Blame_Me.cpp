#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int dp[200005][64];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            for (int j = 0; j < 64; j++) {
                dp[i][j] = dp[i-1][j] + dp[i-1][j^x];
                if (j == (j & x)) {
                    dp[i][j]++;
                }
                dp[i][j] %= mod;
            }
        }
        int ans = 0;
        for (int j = 0; j < 64; j++) {
            if (__builtin_popcountll(j) == k) {
                ans += dp[n][j];
                ans %= mod;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
