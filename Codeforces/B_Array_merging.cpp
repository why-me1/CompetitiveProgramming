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
ll n,mx=0;
cin>>n;
ll a[n],b[n];
unordered_map<ll,ll>mp1,mp2;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
for(int i=0;i<n;i++){
    ll j=i,cnt=0;
    while(a[j]==a[i] && j<n){
        cnt++;
        j++;
    }
    mp1[a[i]]=max(mp1[a[i]],cnt);
    i=j-1;   
}
for(int i=0;i<n;i++){
    ll j=i,cnt=0;
    while(b[j]==b[i] && j<n){
        cnt++;
        j++;
    }
    mp2[b[i]]=max(mp2[b[i]],cnt);
    i=j-1;   
}
for(auto i:mp1){
    if(mp2[i.ff]){
        mx=max(mx,i.ss+mp2[i.ff]);
    }
    else mx=max(mx,i.ss);
}
for(auto i:mp2){
    if(mp1[i.ff]){
        mx=max(mx,i.ss+mp1[i.ff]);
    }
    else mx=max(mx,i.ss);
}
cout<<mx<<nl;
}
return 0;
}