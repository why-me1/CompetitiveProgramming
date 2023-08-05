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
string a,s;
cin>>a>>s;
vector<int>v;
int i,j,minus=0;
for(i=a.size()-1,j=s.size()-1;j>=0;i--,j--){
    if(i<0){
        v.pb(s[j]-'0');
        continue;
    }
    int x=a[i]-'0',y=s[j]-'0';
    if(y>=x)v.pb(y-x);
    else{
        int x1;
        x1=((s[j-1]-'0')*10)+(s[j]-'0');
        if(x1>=10 && x1<=18 && x1>x){
        v.pb(x1-x);
        j--;
        }
        else{
            minus=1;
            break;
        }       
    }
}
if((j==-1 && i>=0))minus=1;
if(minus)cout<<-1;
else {
    int f=0;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]!=0)f=1;
        if(f)cout<<v[i];       
    }
}
cout<<nl;
}
return 0;
}