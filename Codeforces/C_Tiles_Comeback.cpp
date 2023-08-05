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
int n,k;
cin>>n>>k;
int a[n];
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
int first=0,second=0,f=0;
for(int i=0;i<n;i++){
    if(a[i]==a[0] && f==0){
        first++;
        if(first==k){
            f=1;
        }
    }
    if(f){
        if(a[i]==a[n-1])second++;
    }
}
if(a[0]==a[n-1] && mp[a[0]]>=k)yes;
else if(a[0]!=a[n-1] && first>=k && second>=k)yes;
else no;

}
return 0;
}