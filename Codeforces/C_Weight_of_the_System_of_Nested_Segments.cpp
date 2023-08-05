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
int n,m;
cin>>n>>m;
unordered_map<int,int>mp;
vector<pair<int,int>>v,p,p1;
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    mp[a]=i;
    v.pb({b,a});
}
sort(all(v));
ll ans=0,i=0,j=(2*n)-1;
for(int i=0;i<2*n;i++){
    p1.pb({v[i].ss,v[i].ff});
    ans+=v[i].ff;
}
sort(all(p1));
while(i<j){
    p.pb({mp[p1[i].ff]+1,mp[p1[j].ff]+1});
    i++;
    j--;
}
cout<<ans<<nl;
for(auto i:p)cout<<i.ff<<" "<<i.ss<<nl;
cout<<nl;
}
return 0;
}