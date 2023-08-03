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
int n,ans;
cin>>n;
int a[n],pre[n+1];
pre[0]=0;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=1;i<=n;i++)pre[i]=pre[i-1]+a[i-1];
int l=1,h=n;
while(l<h){
    int mid=(l+h)/2;
    cout<<'?'<<" "<<mid-l+1<<" ";
    for(int i=l;i<=mid;i++) cout<<i<<" ";
    cout<<nl;
    cout.flush();
    int val;
    cin>>val;
    cout.flush();
    if(val==pre[mid]-pre[l-1]){
        l=mid+1;
    }
    else{
        h=mid;
    }
}
cout<<'!'<<" "<<l<<nl;
cout<<flush;
}
return 0;
}