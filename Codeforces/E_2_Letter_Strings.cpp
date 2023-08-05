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
#define mk make_pair
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
int t; cin >> t; while(t--){
ll n,ans=0;
cin>>n;
vector<string>v;
map<char,int>mp1,mp3;
map<string,int>mp2;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.pb(s);
    mp1[s[0]]++;
    mp2[s]++;
    mp3[s[1]]++;
}
for(int i=0;i<n;i++){
    string str=v[i];
    ans+=((mp1[str[0]]-mp2[str])+(mp3[str[1]]-mp2[str]));
    mp1[str[0]]--;
    mp2[str]--;
    mp3[str[1]]--;
}
cout<<ans<<nl;
}
return 0;
}