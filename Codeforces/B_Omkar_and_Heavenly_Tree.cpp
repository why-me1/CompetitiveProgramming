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
int n,q,ans;
cin>>n>>q;
map<int,int>mp;
while(q--){
    int a,b,c;
    cin>>a>>b>>c;
    mp[b]=1;
}
for(int i=1;i<=n;i++)if(mp[i]==0)ans=i;
for(int i=1;i<=n;i++)if(i!=ans)cout<<ans<<" "<<i<<nl;
}
return 0;
}