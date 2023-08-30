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
        int n;
        cin >> n;
        vector<int> v;
        v.push_back(n);
        while (n != 1)
        {
            int x = log2(n & -n);
            if (pow(2, x) != n)
            {
                n -= pow(2, x);
                v.push_back(n);
            }
            else
            {
                n -= (n / 2);
                v.push_back(n);
            }
        }
        cout << v.size() << '\n';
        for (auto i : v)
            cout << i << " ";
        cout << '\n';
    }
    return 0;
}