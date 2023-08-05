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
ll n,mex;
cin>>n;
mex=n;
ll a[n];
map<ll,ll>mp;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
    v.pb(a[i]);
}
sort(all(v));
unique(v);
for(int i=0;i<n;i++){
if(i!=v[i]){
mex=i;
break;
}
}
mex++;
int f=0,ind1,ind2;
for(int i=0;i<n;i++){
    if(a[i]==mex){
    f=1;
    ind1=i;
    break;
}
}
for(int i=n-1;i>=0;i--){
    if(a[i]==mex){
        ind2=i;
        break;
    }
}
if(f){
    for(int i=ind1;i<=ind2;i++){
        mp[a[i]]--;
    }
    int c=0;
    for(auto i:mp){
        if(i.ff<=mex-2){
            if(i.ss==0)c++;
        }
        else break;
    }
    if(c>=1)no;
    else yes;
}
else{
    int x=0;
    mex--;
    for(auto i:mp){
        if(i.ff>mex){
            x=1;
            break;
        }
        if(i.ss>1){
            x=1;
            break;
        }
    }
    if(x)yes;
    else no;
}
}
return 0;
}