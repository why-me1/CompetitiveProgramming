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
ll m,k,a,b,ans;
cin>>m>>k>>a>>b;
m-=(min(b,m/k))*k;
if(a>=m){
    cout<<0<<nl;
    continue;
}
if(m%k<=a){
    a-=(m%k);
    m-=(m%k);
    int x=a/k;
    m-=(x*k);
}
else{
    m-=a;
}
ans=m/k + m%k;
cout<<ans<<nl;
}
return 0;
}