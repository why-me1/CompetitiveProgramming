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
int n,m,h,in,ans=0;
cin>>n>>m>>h;
vector<pair<ll,pair<ll,ll>>>res;
for(int i=0;i<n;i++){
    vector<int>v;
    for(int j=0;j<m;j++){
        cin>>in;
        v.pb(in);
    }
    sort(all(v));
    ll penalty=0,pre=0;
    int indx;
    for(indx=0;indx<m;indx++){
        if(pre+v[indx]<=h){
            pre+=v[indx];
            penalty+=pre;
        }
        else break;
    }
    res.pb({-indx,{penalty,i}});
    //cout<<indx-1<<" "<<pre[indx-1]<<nl;
}
sort(all(res));
for(auto i:res){
    if(i.ss.ss==0){
        ans++;
        break;
    }
    else ans++;
    //cout<<i.ss.ss<<" "<<i.ff<<" "<<i.ss.ff<<nl;
}
cout<<ans<<nl;
}
return 0;
}