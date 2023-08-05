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
int n,d,h;
double area=0,ans;
cin>>n>>d>>h;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n-1;i++){
    if(a[i]+h>a[i+1]){
        double h1=1.0*(h-(a[i+1]-a[i]));
        double d1=1.0*(d*h1)/h;
        area+=(d1*h1*0.5);
    }
}
double total=1.0*(n*0.5*d*h);
//cout<<area<<" "<<total<<nl;
ans=total-area;
cout<<fixed<<ans<<nl;
}
return 0;
}