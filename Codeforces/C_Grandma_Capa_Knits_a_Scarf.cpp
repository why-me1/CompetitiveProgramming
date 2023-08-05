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
        ll n, ans = INF, y = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int k = 0; k < 26; k++)
        {
            char ch = (char)k + 97;
            ll i = 0, j = n - 1, x = 0, c = 0;
            while (i < j)
            {
                if (s[i] != s[j])
                {
                    if (s[i] == ch)
                    {
                        i++;
                        c++;
                    }
                    else if (s[j] == ch)
                    {
                        j--;
                        c++;
                    }
                    else
                    {
                        x = 1;
                        break;
                    }
                }
                else
                {
                    i++;
                    j--;
                }
            }
            if (!x)
            {
                ans = min(ans, c);
                y = 1;
            }
        }
        if (!y)
            ans = -1;
        cout << ans << nl;
    }
    return 0;
}