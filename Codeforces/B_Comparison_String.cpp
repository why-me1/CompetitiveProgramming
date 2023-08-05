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
string s;
vector<int>v,v1;
cin>>s;
if(s[0]=='<')v1.push_back(1);
else v1.push_back(120);
v.pb(v1[0]);
for(int i=0;i<n;i++){
    if(s[i]=='>'){
        int x=v.back()-1;
        cout<<x<<nl;
        sort(all(v1));
        int z=binary_search(all(v1),x);
        if(z==0){
            v.pb(x);
            v1.pb(x);
        }
        else{
            v.pb(x);
        }
    }
    if(s[i]=='<'){
        int x=v.back()+1;
        cout<<x<<nl;
       sort(all(v1));
        int z=binary_search(all(v1),x);
        if(z==0){
            v.pb(x);
            v1.pb(x);
        }
        else{
            v.pb(x);
        }
    }
}
sort(all(v1));
unique(v1);
cout<<v1.size()<<nl;
}
return 0;
}