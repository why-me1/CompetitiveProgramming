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
int n,rep=0;
cin>>n;
vector<int>v;
v.pb(0);
for(int i=1;i<=n;i++){
    if(n%i==0){
    v.pb(i);
    }
}
v.pb(0);
for(int i=1;i<=n+1;i++){
    if(i!=v[i]){
        rep=i;
        break;
    }
}
//cout<<rep<<nl;
string ans;
int c=0;
while(c!=n){
for(int i=1;i<=rep;i++){
char s=(char)(96+i);
ans+=s;
c++;
if(c==n)break;
}
}
cout<<ans<<nl;
}
return 0;
}