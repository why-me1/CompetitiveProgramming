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
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define unique(x) x.erase(unique(all(x)), x.end());

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
ll n,x;
cin>>n>>x;
ll l=-(n-1),r=n+1;
if(x<l || x>r)cout<<-1<<nl;
else{
    if(x>0){
        string s;
        ll plus=(x-1);
        ll mul=n-plus;
        for(int i=0;i<mul;i++)s+='*';
        for(int i=0;i<plus;i++)s+='+';
        cout<<s<<nl;
    }
    else{
        string s;
        ll min=(abs(x)+1);
        ll mul=n-min;
        for(int i=0;i<mul;i++)s+='*';
        for(int i=0;i<min;i++)s+='-';
        cout<<s<<nl;
    }
}

}
return 0;
}
