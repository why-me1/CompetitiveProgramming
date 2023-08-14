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
string str="0",s;
cin>>s;
str+=s;
int index=-1;
for(int i=str.size()-2;i>=0;i--){
    if(str[i+1]-'0'>=5){
        index=i;
        str[i]=(char)((int)str[i] + 1);
    }
}
if(index!=-1){
for(int i=index+1;i<str.size();i++){
    str[i]='0';
}
}
if(str[0]=='0') str.erase(str.begin()+0);
cout<<str<<nl;
}
return 0;
}