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
ll n,two=0;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    int val=a[i];
    while(a[i]%2==0){
        two++;
        a[i]/=2;
    }
}
vector<int>v;
for(int i=2;i<=n;i++){
    int ind=i,cnt=0;
    if(i%2==0){
        while(ind%2==0){
        cnt++;
        ind/=2;
    }
    v.pb(cnt);
    }  
}
int rem=n-two,ans=0; 
if(rem<=0){
    cout<<0<<nl;
    continue;
}
sort(rall(v));
for(auto i:v){
    rem-=i;
    ans++;
    if(rem<=0)break;
}
if(rem>0)cout<<-1<<nl;
else cout<<ans<<nl;
}
return 0;
}