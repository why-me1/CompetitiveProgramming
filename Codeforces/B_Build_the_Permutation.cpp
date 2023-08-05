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
int n,a,b;
cin>>n>>a>>b;
if(a+b>n-2 || abs(a-b)>1){
    cout<<-1<<nl;
    continue;
}
int arr[n+1];
for(int i=0;i<=n;i++)arr[i]=i;
if(a==0 && b==0){
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
    cout<<nl;
    continue;
}
int x=a+b+1;
if(b>a){
    for(int i=1;i<=x;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
else if(a>b){
    for(int i=n;i>(n-x);i-=2)swap(arr[i],arr[i-1]);
}
else{
    for(int i=1;i<x;i+=2){
        swap(arr[i],arr[i+1]);
    }
    swap(arr[n],arr[n-1]);
}
for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
cout<<nl;
}
return 0;
}