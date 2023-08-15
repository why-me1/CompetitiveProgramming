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
int n,mini=MAX_N,maxi=0,l,r,flag=0;
cin>>n;
int a[n];
vector<int>mn,mx;
for(int i=0;i<n;i++){
    cin>>a[i];
    mn.pb(a[i]);
    mx.pb(a[i]);
    mini=min(mini,a[i]);
    maxi=max(maxi,a[i]);
}
sort(all(mn));
reverse(all(mn));
sort(all(mx));
int i=0,j=n-1;
while(i<j){
    int f=0,g=0;
if(a[i]==mn.back()){
f=1;
mn.pop_back();
i++;
}
if(a[i]==mx.back()){
    f=1;
    mx.pop_back();
    i++;
}
if(a[j]==mn.back()){
g=1;
mn.pop_back();
j--;
}
if(a[j]==mx.back()){
    g=1;
    mx.pop_back();
    j--;
}
if(f==0 && g==0){
l=i+1;
r=j+1;
flag=1;
break;
}
}
if(flag)cout<<l<<" "<<r<<nl;
else cout<<-1<<nl;
}
return 0;
}