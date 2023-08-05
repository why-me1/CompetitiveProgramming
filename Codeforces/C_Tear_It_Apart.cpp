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
string s,str;
cin>>s;
str=s;
unique(str);
int n=s.size(),ans=0,mx=0,mn=1e6;
map<char,int>mp;
for(int i=0;i<n;i++)mp[s[i]]++;
for(auto i:mp){
    char ch=i.ff;
    for(int j=0;j<n;j++){
        int c=0;
        if(s[j]==ch)continue;
        while(s[j]!=ch && j<n){
            c++;
            j++;
        }
        j--;
        mx=max(mx,c);
    }
    mn=min(mn,mx);
    mx=0;
}
if(str.size()==1)ans=0;
else{
while(mn!=1){
    mn/=2;
    ans++;
}
ans++;
}
cout<<ans<<nl;
}
return 0;
}