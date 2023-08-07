#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define unique(x) x.erase(unique(all(x)), x.end());
#define set_bits(x) __builtin_popcountll(x)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
// int t; cin >> t; while(t--){
int n;
cin>>n;
string s;
cin>>s;
map<char,vector<int>>mp;
for(int i=0;i<n;i++){
    mp[s[i]].pb(i);
}
int q;
cin>>q;
while(q--){
    string str;
    cin>>str;
    int f=1,st=-1;
    for(int i=0;i<str.size();i++){
        auto it=upper_bound(mp[str[i]].begin(),mp[str[i]].end(),st);
        if(it==mp[str[i]].end()){
            f=0;
            break;
        }
        int index=it-mp[str[i]].begin();
        st=mp[str[i]][index];
    }
    if(f)yes;
    else no;
}
return 0;
}
