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
int n;
cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
if(s.size()==1){
    cout<<-1<<nl;
    continue;
}
sort(a,a+n);
vector<int>c,b;
int i=n-1;
while(a[i]==a[n-1]){
    b.pb(a[i]);
    i--;
}
for(;i>=0;i--)c.pb(a[i]);
cout<<c.size()<<" "<<b.size()<<nl;
for(auto j:c)cout<<j<<" ";
cout<<nl;
for(auto j:b)cout<<j<<" ";
cout<<nl;
}
return 0;
}