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
int a,b,f=0;
cin>>a>>b;
if(a<b)no;
else if(a==b)yes;
else{
    vector<int>v;
    v.pb(a);
    while(!(v.empty())){
        int d=v.back();
        if(d==b){
            f=1;
            break;
        }
        if(d%3==0){          
            v.pop_back();
            int x=d/3,y=2*x;
            v.pb(x);
            v.pb(y);
        }
        else{
            v.pop_back();
        }
    }
    if(f)yes;
    else no;
}
}
return 0;
}