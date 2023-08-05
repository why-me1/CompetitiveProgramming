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
//int t; cin >> t; while(t--){
int n;
cin>>n;
string a,b;
cin>>a>>b;
for(int i=0;i<n;i++){
    if(a[i]=='0' && b[i]=='o' || a[i]=='o' && b[i]=='0' || a[i]=='1' && b[i]=='l' || a[i]=='l' && b[i]=='1')a[i]=b[i];
}
if(a==b)cout<<"Yes"<<nl;
else cout<<"No"<<nl;
//}
return 0;
}