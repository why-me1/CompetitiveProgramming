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
int n,x,f1=0,f2=0,f3=0;
ll ans=0;
cin>>n>>x;
int a[n+1],b[n+1],c[n+1];
for(int i=1;i<=n;i++) {
    cin>>a[i];
    int y=x|a[i];
    if(y==x && f1==0) ans|=a[i];
    else f1=1;
}
for(int i=1;i<=n;i++){
    cin>>b[i];
    int y=x|b[i];
    if(y==x && f2==0)ans|=b[i];
    else f2=1;
} 
for(int i=1;i<=n;i++){
    cin>>c[i];
    int y=x|c[i];
    if(y==x && f3==0)ans|=c[i];
    else f3=1;
}
if(ans==x)yes;
else no;
}
return 0;
}