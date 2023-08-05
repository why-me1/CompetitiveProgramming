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
        int n, m, one = 0, f = 0, ans = 0, x = 0;
        cin >> n >> m;
        char mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == '1')
                    one++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == '0')
                {
                    if (i - 1 >= 0)
                    {
                        if (mat[i - 1][j] == '0')
                            f = 1;
                        if (j + 1 < m)
                        {
                            if (mat[i - 1][j + 1] == '0')
                                x = 1;
                        }
                        if (j - 1 >= 0)
                        {
                            if (mat[i - 1][j - 1] == '0')
                                x = 1;
                        }
                    }
                    if (j - 1 >= 0)
                    {
                        if (mat[i][j - 1] == '0')
                            f = 1;
                        if (i + 1 < n)
                        {
                            if (mat[i + 1][j - 1] == '0')
                                x = 1;
                        }
                        if (i - 1 >= 0)
                        {
                            if (mat[i - 1][j - 1] == '0')
                                x = 1;
                        }
                    }
                    if (i + 1 < n)
                    {
                        if (mat[i + 1][j] == '0')
                            f = 1;
                        if (j + 1 < m)
                        {
                            if (mat[i + 1][j + 1] == '0')
                                x = 1;
                        }
                        if (j - 1 >= 0)
                        {
                            if (mat[i + 1][j - 1] == '0')
                                x = 1;
                        }
                    }
                    if (j + 1 < m)
                    {
                        if (mat[i][j + 1] == '0')
                            f = 1;
                        if (i + 1 < n)
                        {
                            if (mat[i + 1][j + 1] == '0')
                                x = 1;
                        }
                        if (i - 1 >= 0)
                        {
                            if (mat[i - 1][j + 1] == '0')
                                x = 1;
                        }
                    }
                }
            }
        }
        if (f)
            ans = one;
        else if (one < n * m)
        {
            if (x)
                ans = one;
            else
                ans = one - 1;
        }
        else
            ans = one - 2;
        cout << ans << nl;
    }
    return 0;
}