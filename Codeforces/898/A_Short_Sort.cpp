#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
string s;
cin>>s;
int c=0;
if(s[0]!='a')c++;
if(s[1]!='b')c++;
if(s[2]!='c')c++;
if(c<3)cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}
return 0;
}