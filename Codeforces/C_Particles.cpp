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
ll n,sum1=0,sum2=0,mn=0;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<0)mn++;
}
if(mn==n){
    ll ans=*max_element(a,a+n);
    cout<<ans<<nl;
    continue;
}
for(int i=0;i<n;i+=2){
    if(sum1+a[i]>=sum1)sum1+=a[i];
}
for(int i=1;i<n;i+=2){
    if(sum2+a[i]>=sum2)sum2+=a[i];
}
cout<<max(sum1,sum2)<<nl;
}
return 0;
}