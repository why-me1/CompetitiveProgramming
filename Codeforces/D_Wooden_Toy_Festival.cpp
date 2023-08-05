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
int n;
cin>>n;
vector<int>v(n);
for(auto &i:v)cin>>i;
sort(all(v));
ll l=0,r=1e9,ans;
while(l<=r){
    ll st=v[0],c=0;
    ll m=(l+r)/2;
    for(int i=0;i<n;i++){
        if(v[i]-st>2*m){
            c++;
            st=v[i];
        }
    }
    if(c<3){
        ans=m;
        r=m-1;
    }
    else l=m+1;
}
cout<<ans<<nl;
}
return 0;
}