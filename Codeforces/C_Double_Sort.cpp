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
int a[n],b[n];
vector<pair<int,int>>p,pr;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];
for(int i=0;i<n;i++)p.pb({a[i],b[i]});
sort(all(p));
for(int i=0;i<n-1;i++){
    if(p[i].ff>p[i+1].ff || p[i].ss>p[i+1].ss){
        f=1;
        break;
    }
}
if(f){
    cout<<-1<<nl;
    continue;
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            pr.pb({j+1,j+2});
            swap(a[j],a[j+1]);
            swap(b[j],b[j+1]);
        }
    }
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(b[j]>b[j+1]){
            pr.pb({j+1,j+2});
            swap(a[j],a[j+1]);
            swap(b[j],b[j+1]);
        }
    }
}
cout<<pr.size()<<nl;
for(auto i:pr){
    cout<<i.ff<<" "<<i.ss<<nl;
}
}
return 0;
}