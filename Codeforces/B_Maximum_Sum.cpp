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
ll n,k,cnt=0,totalsum=0,two_k=0,sum1=0,sum2=0,mx=0,sum3=0,sum4=0;
cin>>n>>k;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    totalsum+=a[i];
}
sort(a,a+n);
for(int i=n-1;i>=0;i--){
    if(cnt<k-1) two_k+=a[i];
    cnt++;
}
int j=n-k+1,i=0;
while(j<n){
sum2+=a[i]+a[i+1];
sum1=two_k+sum2;
mx=max(mx,totalsum-sum1);
i+=2;
two_k-=a[j];
j++;
}
for(int i=0;i<2*k;i++)sum3+=a[i];
for(int i=n-1;i>=n-k;i--)sum4+=a[i];
cout<<max({mx,totalsum-sum3,totalsum-sum4})<<nl;
}
return 0;
}