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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v;
        v.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (v.back() <= a[i])
            {
                v.push_back(a[i]);
            }
            else
            {
                v.push_back(1);
                v.push_back(a[i]);
            }
        }
        cout << v.size() << nl;
        for (auto i : v)
            cout << i << " ";
        cout << nl;
    }
    return 0;
}