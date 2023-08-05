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
if(n&1 && n!=1)cout<<-1<<nl;
else{
    ll a[n],b[n],f=0,s=n-1,curr=1,num=n;
    for(int i=0;i<n;i+=2){
        a[i]=f;
        a[i+1]=s;
        f++;
        s--;
    }
    b[0]=n;
    for(int i=1;i<n;i++){
        if(num+a[i]>b[i-1])b[i]=num+a[i];
        else{
            curr++;
            num=n*curr;
            b[i]=num+a[i];
        }
    }
    // for(int i=0;i<n;i++)cout<<b[i]<<" ";
    // cout<<nl;
    cout<<b[0]<<" ";
    for(int i=1;i<n;i++)cout<<b[i]-b[i-1]<<" ";
    cout<<nl;

}

}
return 0;
}