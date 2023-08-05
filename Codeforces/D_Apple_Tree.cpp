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

vector<vector<int>>adj;
vector<int>value;

int dfs(int curr,int parent){
    int count=0;
    for(auto child:adj[curr]){
        if(child!=parent){
            count+=dfs(child,curr);
        }
    }
    if(count==0 && adj[curr].size()==1)count++;
    value[curr]=count;
    return count;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n;
cin>>n;
adj.resize(n+1);
value.resize(n+1,0);
for(int i=0;i<n-1;i++){
    int u,v;
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
dfs(1,1);
int q;
cin>>q;
while(q--){
    ll x,y,ans;
    cin>>x>>y;
    ans=1ll*value[x]*value[y];
    cout<<ans<<nl;
}
adj.clear();
value.clear();
}
return 0;
}