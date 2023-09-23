#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, len = 1, ans = 1;
        cin >> n >> k;
        ll a[n], h[n];
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
                f = true;
        }
        for (int i = 0; i < n; i++)
            cin >> h[i];
        int sum = a[0], j = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == j)
                sum += a[j], j++;
            for (;j < n;)
            {
                if (h[j - 1] % h[j] == 0 && sum + a[j] <= k)
                {
                    len++;
                    ans = max(ans, len);
                    sum += a[j];
                    j++;
                }
                else
                {
                    ans = max(ans, len);
                    // cout<<len<<'\n';
                    len = max(1LL, len - 1);
                    sum -= a[i];
                    break;
                }
            }
        }
        if (!f)
            cout << 0 << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}