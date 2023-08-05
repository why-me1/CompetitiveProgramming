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
//int t; cin >> t; while(t--){
ll n,q,total=0;
cin>>n>>q;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    total+=a[i];
}
unordered_map<ll,ll>mp;
vector<ll>v;
for(int i=0;i<q;i++){
    int type;
    cin>>type;
    if(type==1){
        ll index,value,ans;
        cin>>index>>value;
        if(v.size()!=0){
            if(mp[index]==0){
                ans=total-v.back()+value;
                a[index-1]=value;
                mp[index]=1;
            }
            else{
                ans=total-a[index-1]+value;
                a[index-1]=value;
            }
            cout<<ans<<nl;
            total=ans;
        }
        else{
        ans=total-a[index-1]+value;
        a[index-1]=value;
        total=ans;
        cout<<ans<<nl;
        }
    }
    else{
        ll value,ans;
        cin>>value;
        v.pb(value);
        mp.clear();
        ans=value*n;
        total=ans;
        cout<<ans<<nl;
    }
}
//}
return 0;
}