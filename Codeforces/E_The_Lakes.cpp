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

int n, m;
int a[1005][1005];
bool visited[1005][1005];

int dfs(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > m)
    {
        return 0;
    }
    if (visited[i][j] || a[i][j] == 0)
    {
        return 0;
    }
    visited[i][j] = true;
    int volume = a[i][j];
    volume += dfs(i + 1, j);
    volume += dfs(i - 1, j);
    volume += dfs(i, j + 1);
    volume += dfs(i, j - 1);
    return volume;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                visited[i][j] = false;
            }
        }
        int maxVolume = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] > 0 && !visited[i][j])
                {
                    int volume = dfs(i, j);
                    maxVolume = max(maxVolume, volume);
                }
            }
        }
        cout << maxVolume << endl;
    }
    return 0;
}