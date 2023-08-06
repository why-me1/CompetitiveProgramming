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
ll n,in=-1,mx=0;
cin>>n;
ll a[n];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=n-1;i>0;i--){
    if(a[i]<a[i-1]){
        in=i-1;
        break;
    }
}
for(int i=0;i<=in;i++)mx=max(mx,a[i]);
cout<<mx<<nl;
}
return 0;
}