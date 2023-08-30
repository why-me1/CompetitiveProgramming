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
        int n, k;
        cin >> n >> k;
        string s, odd, even, str;
        cin >> s;
        str = s;
        if (k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << '\n';
            continue;
        }
        for (int i = 0; i < n; i += 2)
        {
            even.push_back(s[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            odd.push_back(s[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        for (int i = 0, j = 0; i < n; i += 2, j++)
        {
            str[i] = even[j];
        }
        for (int i = 1, j = 0; i < n; i += 2, j++)
        {
            str[i] = odd[j];
        }
        cout << str << '\n';
    }
    return 0;
}