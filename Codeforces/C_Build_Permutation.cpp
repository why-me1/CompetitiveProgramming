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
int a[n];
map<int,int>mp;
for(int i=n-1;i>=0;i--){
    ll x=floor(sqrt(i))+1,y;
    x*=x;
    x-=i;
    if(mp[x] || x>n-1)x=0;
    y=abs(i-x)+1;
    while(y){
        a[i]=x;
        mp[x]++;
        //cout<<x<<nl;
        x++;
        y--;
        i--;
    }
    i++;
}
for(int i=0;i<n;i++)cout<<a[i]<<" ";
cout<<nl;
}
return 0;
}