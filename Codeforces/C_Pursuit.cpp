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
ll n,target=0,now=0,ans=0,bcnt=0;
cin>>n;
int k=n-n/4;
int a[n],b[n];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];
sort(a,a+n);
sort(b,b+n);
vector<int>v1,v2;
int x=n-k,y=n+1;
bcnt=k;
for(int i=n-1;i>=0;i--){
    if(i>=x){
    now+=a[i];
    v1.pb(a[i]);
    target+=b[i];
    }
    else v2.pb(b[i]);
}
reverse(all(v2));
while(now<target){
    int z=y-y/4;
if(z>bcnt && z<=n){
target+=v2.back();
bcnt++;
v2.pop_back();
}
if(y%4==0){
    now-=v1.back();
    v1.pop_back();
}
now+=100;
y++;
ans++;
}
cout<<ans<<nl;
}
return 0;
}