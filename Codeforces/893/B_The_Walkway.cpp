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
ll n,m,d,gap=0;
cin>>n>>m>>d;
ll a[m+2];
a[0]=1-d;
for(int i=1;i<=m;i++){
    cin>>a[i];
}
map<ll,ll>mp;
a[m+1]=n+1;
for(int i=1;i<m+2;i++){   
    gap+=(a[i]-a[i-1]-1)/d;
}
//cout<<gap<<nl;
for(int i=1;i<=m;i++){
    mp[a[i]]=m + gap - (a[i+1]-a[i]-1)/d - (a[i]-a[i-1]-1)/d + (a[i+1]-a[i-1]-1)/d -1;
}
ll ans1=INF,ans2=0;
for(auto i:mp){
    ans1=min(ans1,i.ss);
    //cout<<i.ff<<" "<<i.ss<<nl;
}
for(auto i:mp)if(i.ss==ans1)ans2++;
cout<<ans1<<" "<<ans2<<nl;
}
return 0;
}