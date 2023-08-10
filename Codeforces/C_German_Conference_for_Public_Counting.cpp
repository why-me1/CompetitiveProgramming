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
ll n;
cin>>n;
if(n<=9){
    cout<<n+1<<nl;
}
else{
    int dig=1;
    ll x=n,y=1;
    while(x>=10){
        x/=10;
        dig++;
    }
    ll l=10;
    for(int i=0;i<dig-2;i++)l+=9;
    for(int i=1;i<dig;i++){
        y=y*10 + 1;
    }
    x=n/y;
    cout<<x+l+(dig-2)<<nl;
}
return 0;
}