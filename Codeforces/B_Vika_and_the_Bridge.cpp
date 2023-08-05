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
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,k,ans=1e6,f;
cin>>n>>k;
vector<int>a(n);
vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    cin>>a[i];
    v.pb({a[i],i});
}
f=a[0];
sort(all(a));
unique(a);
for(int i=0;i<a.size();i++){
    v.pb({a[i],0});   
    v.pb({a[i],n});
}
sort(all(v));
vector<int>mx;
for(int i=0;i<v.size();i++){
    if(v[i].ff==v[i+1].ff && i+1<v.size()){
        if(v[i].ss==0 && v[i].ff!=f){
            mx.pb(v[i+1].ss-v[i].ss);
        }
        else{
           mx.pb(v[i+1].ss-v[i].ss-1);
        }
    }
    else{
        sort(rall(mx));
        int a=mx[1],b=mx[0]/2;
        ans=min(ans,max(a,b));
        mx.clear();
    }
}
cout<<ans<<nl;
}
return 0;
}