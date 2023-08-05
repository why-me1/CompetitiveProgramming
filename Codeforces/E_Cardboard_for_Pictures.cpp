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
const __int64 INF = 2e18;
const ld EPS = 1e-9;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
ll n,c;
cin>>n>>c;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int l=0,r=(int)1e9,ans=0;
while(l<=r){
    ans=(l+r)/2;
    __int64 tot=0;
    for(int i=0;i<n;i++){
        tot+=((a[i]+(2*ans))*(a[i]+(2*ans)));
        tot=min(INF,tot);
    }
    if(tot==c){
        break;
    }
    else if(tot<c){
        l=ans+1;
    }
    else r=ans-1;
}
cout<<ans<<nl;
}
return 0;
}