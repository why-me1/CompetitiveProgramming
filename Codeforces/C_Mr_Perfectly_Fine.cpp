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
ll n,mn1=INF,mn2=INF,mn3=INF,f=0,f1=0,f2=0;
cin>>n;
for(int i=0;i<n;i++){
    ll time;
    cin>>time;
    string s;
    cin>>s;
    if(s[0]=='1')f=1;
    if(s[1]=='1')f1=1;
    if(s[0]=='1' && s[1]=='0'){
        mn1=min(mn1,time);
    }
    else if(s[0]=='1' && s[1]=='1'){
        mn3=min(mn3,time);
    }
    else if(s[0]=='0' && s[1]=='1') {
        mn2=min(mn2,time);
    }
}
if(!f || !f1)cout<<-1<<nl;
else cout<<min((mn1+mn2),mn3)<<nl;
}
return 0;
}