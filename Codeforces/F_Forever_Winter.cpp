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

vector<int>graph[205];

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,m,a,b;
cin>>n>>m;
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    graph[x].pb(y);
    graph[y].pb(x);
}
for(int i=1;i<=n;i++){
    if(graph[i].size()==1)continue;
    int f=1,z;
    for(auto j:graph[i]){
        if(graph[j].size()==1){
            f=0;
            break;
        }
        z=graph[j].size();
    }
    if(f){
        a=graph[i].size();
        b=z;
        break;
    }
}
cout<<a<<" "<<b-1<<nl;
for(int i=1;i<=n;i++){
    graph[i].clear();
}

}
return 0;
}