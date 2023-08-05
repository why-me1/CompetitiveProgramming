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
int n,f=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
if(a[0]==1){
    cout<<n+1<<" ";
    for(int i=1;i<=n;i++)cout<<i<<" ";
    cout<<nl;
}
else if(a[n-1]==0){
    for(int i=1;i<=n;i++)cout<<i<<" ";
    cout<<n+1<<nl;
}
else{
    int mid;
    for(int i=0;i<n-1;i++){
        if(a[i]==0 && a[i+1]==1){
            f=1;
            mid=i+1;
            break;
        }
    }
    if(f){
        for(int i=1;i<=mid;i++)cout<<i<<" ";
        cout<<n+1<<" ";
        for(int i=mid+1;i<=n;i++)cout<<i<<" ";
        cout<<nl;
    }
    else cout<<-1<<nl;
}
}
return 0;
}