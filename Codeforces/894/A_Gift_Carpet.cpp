#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, f = 0;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i][j] == 'v' && f == 0)
                {
                    f++;
                    break;
                }
                if (a[i][j] == 'i' && f == 1)
                {
                    f++;
                    break;
                }
                if (a[i][j] == 'k' && f == 2)
                {
                    f++;
                    break;
                }
                if (a[i][j] == 'a' && f == 3)
                {
                    f++;
                    break;
                }
            }
        }
        if (f == 4)
            yes;
        else
            no;
    }
    return 0;
}