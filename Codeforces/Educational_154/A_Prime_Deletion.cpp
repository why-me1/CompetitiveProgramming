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
        
        string s;
        cin >> s;
        int f;
        bool ok = false;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '1')
            {
                f = i;
                break;
            }
        for (int i = f + 1; i < s.size(); i++)
            if (s[i] == '3')
            {
                ok = true;
            }
        if (ok)
            cout << "13" << nl;
        else
            cout << "31" << nl;
    }
    return 0;
}