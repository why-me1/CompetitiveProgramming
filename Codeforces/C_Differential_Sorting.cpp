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
ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++)cin>>a[i];
if(a[n-1]<a[n-2]){
    cout<<-1<<nl;
    continue;
}
if(a[n-1]<0 && a[n-2]<0){
    if(is_sorted(a,a+n))
    cout<<0<<nl;
    else cout<<-1<<nl;
    continue;
}
cout<<n-2<<nl;
for(int i=0;i<n-2;i++){
    cout<<i+1<<" "<<n-1<<" "<<n<<nl;
}
}
return 0;
}