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
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>a[i];
    a[i]%=k;
    if(a[i]==0)a[i]=k;
    q.push({-a[i],i+1});
}
while(!q.empty()){
    int x=-q.top().ff;
    int y=q.top().ss;
    q.pop();
    x-=k;
    if(x<=0)v.pb(y);
    else q.push({-x,y});
}
for(auto i:v)cout<<i<<" ";
cout<<nl;
}
return 0;
}