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
ll n,k,x,ans=0,gap=0;
cin>>n>>k>>x;
ll a[n];
vector<ll>v;
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=0;i<n-1;i++){
    if(a[i+1]-a[i]>x){
        v.pb(a[i+1]-a[i]);
        gap++;
    }
}
sort(all(v));
for(int i=0;i<v.size();i++){
    ll need=v[i]/x;
    if(v[i]%x==0){
        need--;
    }
    if(k>0 && k>=need){
        gap--;
        k-=need;
    }
}
cout<<gap+1<<nl;
return 0;
}