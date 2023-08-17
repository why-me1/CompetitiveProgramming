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
int n;
cin>>n;
map<int,int>mp;
vector<int>v;
for(int i=2;i<=n;i++){
    ll val=i;
    if(mp[val]==0){
    while(val<=n){
        if(mp[val]==0){
        v.pb(val);
        mp[val]=1;
        }
        val*=2;
    }
    }
}
for(int i=1;i<=n;i++){
    if(mp[i]==0)v.pb(i);
}
for(auto it:v)cout<<it<<" ";
cout<<nl;
}
return 0;
}