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
int n,m;
cin>>n>>m;
int a[n*m];
for(int i=0;i<(n*m);i++)cin>>a[i];
sort(a,a+(n*m));
int x=min(m,n);
ll p=(((n*m)-x)*(a[(n*m)-1]-a[0]))+((x-1)*(a[(n*m)-2]-a[0]));
ll q=((n*m)-x)*(a[(n*m)-1]-a[0])+((x-1)*(a[(n*m)-1]-a[1]));
cout<<max(p,q)<<nl;
}
return 0;
}