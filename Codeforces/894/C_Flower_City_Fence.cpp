#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define all(x) x.begin(), x.end()
#define unique(x) x.erase(unique(all(x)), x.end());

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 1;
        cin >> n;
        map<int, int> mp1, mp2;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i]]++;
        }
        reverse(all(a));
        unique(a);
        int x = n;
        mp2[x] = a[0];
        x -= mp1[a[0]];
        for (int i = 1; i < (int)a.size(); i++)
        {
            mp2[x] = abs(a[i - 1] - a[i]);
            x -= mp1[a[i]];
        }
        for (auto i : mp2)
        {
            if (mp2[i.first] != mp1[i.first])
            {
                f = 0;
                break;
            }
        }
        if (f)
            yes;
        else
            no;
    }
    return 0;
}