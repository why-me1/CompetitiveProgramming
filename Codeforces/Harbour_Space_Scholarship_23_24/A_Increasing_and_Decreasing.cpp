#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, c = 1;
        cin >> x >> y >> n;
        vector<int> v;
        v.push_back(y);
        while (v.size() != (n - 1))
        {
            v.push_back(v.back() - c);
            c++;
        }
        v.push_back(x);
        reverse(v.begin(), v.end());
        if (v[1] - v[0] <= v[2] - v[1])
        {
            cout << -1 << '\n';
        }
        else
        {
            for (auto i : v)
                cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}