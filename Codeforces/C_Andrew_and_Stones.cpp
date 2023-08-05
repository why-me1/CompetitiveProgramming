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
ll n,ans=0,one=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    if(i>0 && i<n-1){
        if(a[i]==1)one++;
        if(a[i]&1) ans+=(a[i]/2 + 1);
        else ans+=(a[i]/2);
    }   
}
if((n==3 && a[1]&1) || one==n-2) cout<<-1<<nl;
else cout<<ans<<nl;
}
return 0;
}