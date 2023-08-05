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
ll n,x,sum=0,ans=0;
cin>>n>>x;
ll a[n];
for(int i=0;i<n;i++)cin>>a[i];
ll pre[n],pre1[n];
sort(a,a+n);
pre[0]=a[0];
pre1[0]=a[0]+1;
vector<ll>v;
for(int i=1;i<n;i++)pre[i]=a[i]+pre[i-1];
for(int i=1;i<n;i++)pre1[i]=a[i]+1+pre1[i-1];
if(pre[0]>x){
    cout<<0<<nl;
    continue;
}
for(int i=0;i<n;i++){
    if(pre[i]<=x){
        ll z=((x-pre[i])/(pre1[i]-pre[i]))+1;
        ans+=z;
    }
    else{
        break;
    }
}
cout<<ans<<nl;
}
return 0;
}