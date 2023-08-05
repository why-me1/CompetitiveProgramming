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
ll n,f=1;
cin>>n;
ll a[n];
ll x=(n*(n+1))/2;
unordered_map<ll,ll>mp;
for(int i=0;i<n-1;i++){
    cin>>a[i];
    if(a[i]>x){
        f=0;
    }
}
a[n-1]=x;
if(!f){
    cout<<"NO"<<nl;
    continue;
}
mp[a[0]]++;
for(int i=n-1;i>0;i--){
    ll val=a[i]-a[i-1];
    if(val!=0) {
        mp[val]++;
    }
}
bool ok=true;
int c=0,y=0,c1=0;
for(auto i:mp){
    if(i.ss>2){
        ok=false;
        break;
    }
    if(i.ss==2){
        c++;
        y=i.ff;
    }
    if(i.ff>n){
        c1=1;
        y=i.ff;
    }
}
if(c>1){
    cout<<"NO"<<nl;
    continue;
}
if(!ok || (c1!=0 && c!=0)){
    cout<<"NO"<<nl;
    continue;
}
if(ok && (c1==0 && c==0)){
    cout<<"YES"<<nl;
    continue;
}
ok=false;
for(int i=1;i<=y/2;i++){
    if(mp[i]==0 && mp[y-i]==0 && i<=n && y-i<=n && i!=y-i){
        ok=true;
        break;
    }
}
if(ok)yes;
else no;
}
return 0;
}