#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        bool ok = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == '0' && a[i + 1] == '1' && b[i] == '0' && b[i + 1] == '1')
            {
                ok = true;
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}