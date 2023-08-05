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
int n,k,sum=0,ans=0;
cin>>n>>k;
vector<int>pos;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    if(a[i]==1)pos.pb(i+1);
}
if(sum<k){
    cout<<-1<<nl;
    continue;
}
for(int i=1;i<pos.size()-k;i++){
    int l=pos[i-1]+1,r=pos[i+k]-1;
    ans=max(ans,r-l+1);
    //cout<<ans<<nl;
}
if(pos.size()==k){
    cout<<0<<nl;
    continue;
}
int x=pos.size();
ans=max(ans,(pos[k]-1));
ans=max(ans,(n-(pos[x-k-1]+1))+1);
cout<<n-ans<<nl;
}
return 0;
}