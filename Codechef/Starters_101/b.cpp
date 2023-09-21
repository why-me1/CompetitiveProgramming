#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,m,ans=INT_MAX;
cin>>n>>m;
string s,k;
cin>>s>>k;
for(int i=0;i<=n-m;i++){
    int c=0;
    for(int j=0;j<m;j++){
        c+=min(abs((s[i+j]-'0')-(k[j]-'0')),min((abs((s[i+j]-'0')-10)+k[j]-'0'),abs(10-(k[j]-'0')+(s[i+j]-'0'))));
    }
    ans=min(ans,c);
}
cout<<ans<<'\n';
}
return 0;
}