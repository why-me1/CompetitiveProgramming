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
ll n,k,diff,f=0;
cin>>n>>k;
ll a[n];
vector<ll>v;
for(int i=n-k;i<n;i++)cin>>a[i];
if(k==1){
    yes;
    continue;
}
diff=(a[n-k+1]-a[n-k]);
for(int i=n-k-1;i>=0;i--){
    a[i]=a[i+1]-diff;
}
v.pb(a[0]);
for(int i=0;i<n-1;i++){
    ll x=(a[i+1]-a[i]);
    v.pb(x);
}
// for(auto i:v)cout<<i<<" ";
// cout<<nl;
// for(int i=0;i<n;i++)cout<<a[i]<<" ";
// cout<<nl;
for(int i=0;i<n-1;i++){
    if(v[i]>v[i+1]){
        f=1;
        break;
    }
}
if(f)no;
else yes;
}
return 0;
}