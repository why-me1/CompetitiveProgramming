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
int n,q;
cin>>n>>q;
ll a[n+1],b[q],pre[n+1];
pre[0]=0;
for(int i=1;i<=n;i++){
cin>>a[i];
pre[i]=a[i]+pre[i-1];
}
for(int i=0;i<q;i++)cin>>b[i];
ll p=a[1];
vector<int>pre_max;
for(int i=1;i<=n;i++){
if(a[i]>=p){
p=a[i];
}
pre_max.pb(p);
}
for(int i=0;i<q;i++){
    int x=b[i];
    int y=(upper_bound(pre_max.begin(),pre_max.end(),x) - pre_max.begin());
    cout<<pre[y]<<" ";
    //cout<<y<<nl;
}
cout<<nl;
}
return 0;
}