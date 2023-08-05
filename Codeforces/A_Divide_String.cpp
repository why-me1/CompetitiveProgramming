#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define pb push_back

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,sc=0,f=0;
cin>>n;
string s,s1,s2;
cin>>s;
vector<int>v;
for(int i=0;i<n;i++){
    if(s[i]>s[0])sc=1;
    if(s[i]==s[0])v.pb(i);
}
if(sc)cout<<"Yes"<<nl;
else{
    if(v.size()<2)cout<<"No"<<nl;
    else{
        for(int i=1;i<n-1;i++){
            if(s.substr(0,i)<s.substr(i)){
                f=1;
                break;
            }
        }
        if(f)cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
}
}
return 0;
}