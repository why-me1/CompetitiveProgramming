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
ll n,cnt=0;
cin>>n;
ll a[n+1],x=n+(n-1);
vector<pair<ll,ll>>v;
for(int i=1;i<=n;i++){
    cin>>a[i];
    v.pb({a[i],i});
}
sort(all(v));
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        ll y=v[i].ff*v[j].ff;
        if(y>x)break;
        if(y==v[i].ss+v[j].ss)cnt++;
    }
}
cout<<cnt<<nl;
}
return 0;
}