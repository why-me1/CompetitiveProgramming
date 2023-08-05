#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define mk make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define unique(x) x.erase(unique(all(x)), x.end());
#define set_bits(x) __builtin_popcountll(x)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int ans = 0, nor = 0, rev = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                nor++;
        }
        reverse(all(b));
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                rev++;
        }
        if (nor == 0)
        {
            cout << 0 << nl;
            continue;
        }
        if (rev == 0)
        {
            cout << 2 << nl;
            continue;
        }
        int x = min(rev, nor);
        if (rev < nor)
        {
            if (x % 2 == 0)
            {
                ans += ((x * 2) - 1);
            }
            else
                ans += (x * 2);
        }
        else if (rev == nor)
        {
            ans += ((x * 2) - 1);
        }
        else
        {
            if (x & 1)
            {
                ans += ((x * 2) - 1);
            }
            else
                ans += (x * 2);
        }
        cout << ans << nl;
    }
    return 0;
}