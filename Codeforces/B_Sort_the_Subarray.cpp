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
int a[n],b[n],l=0,r=n-1;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];
while(a[l]==b[l]){
    l++;
}
while(a[r]==b[r]){
    r--;
}
while(l>0 && b[l]>=b[l-1]){
    l--;
}
while(r<n-1 && b[r]<=b[r+1]){
    r++;
}
cout<<l+1<<" "<<r+1<<nl;
}
return 0;
}