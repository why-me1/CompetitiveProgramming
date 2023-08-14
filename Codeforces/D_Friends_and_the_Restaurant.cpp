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
ll a[n],b[n],ans=0;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];
vector<pair<ll,pair<ll,ll>>>p;
for(int i=0;i<n;i++){
p.pb({b[i]-a[i],{a[i],b[i]}});
}
sort(rall(p));
int i=0,j=n-1;
while(i<j){
    ll budget=p[i].ss.ff+p[j].ss.ff,total=p[i].ss.ss+p[j].ss.ss;
    if(budget<=total){
        ans++;
        i++;
    }
    j--;
}
cout<<ans<<nl;
}
return 0;
}