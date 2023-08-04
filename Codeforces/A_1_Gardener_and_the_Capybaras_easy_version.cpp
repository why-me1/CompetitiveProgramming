#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl "\n"

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
        string s;
        cin >> s;
        string a, b, c;
        if (s[0] == s[1])
        {
            a = s[0];
            b = s[1];
            for (int i = 2; i < s.size(); i++)
            {
                c += s[i];
            }
        }
        else if (s[s.size() - 1] == s[s.size() - 2])
        {
            b = s[s.size() - 2];
            c = s[s.size() - 1];
            for (int i = 0; i < s.size() - 2; i++)
            {
                a += s[i];
            }
        }
        else
        {
            if (s[0] == 'a' && s[1] == 'b')
            {
                a = s[0];
                c = s[s.size() - 1];
                for (int i = 1; i < s.size() - 1; i++)
                    b += s[i];
            }
            else
            {
                a = s[0];
                b = s[1];
                for (int i = 2; i < s.size(); i++)
                    c += s[i];
            }
        }
        cout << a << " " << b << " " << c << nl;
    }    
return 0;
}