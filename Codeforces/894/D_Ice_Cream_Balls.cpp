#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll l = 1, r = 2e9;
        while (l + 1 < r)
        {
            ll m = (r + l) / 2;
            if (m * (m - 1) / 2 <= n)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        cout << l + (n - (l * (l - 1) / 2)) << nl;
    }
    return 0;
}