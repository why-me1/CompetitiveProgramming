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
int t; cin >> t; while(t--){
ll n,mn=INF;
cin>>n;
vector<int>v;
while(n--){
    ll m;
    cin>>m;
    ll a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    sort(a,a+m);
    v.pb(a[1]);

}
sort(all(v));
// for(auto j:v)cout<<j<<" ";
// cout<<nl;
ll ans=mn;
for(int i=1;i<v.size();i++){
ans+=v[i];
}
cout<<ans<<nl;
}
return 0;
}