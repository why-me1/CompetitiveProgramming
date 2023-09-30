#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;
bool suff=true,pre=true;
for(int i=0;i<n;i++){
    if(s[i]!=t[i]){
        pre=false;
        break;
    }
}
for(int i=m-1,j=n-1;i>=m-n;i--,j--){
    if(s[j]!=t[i]){
        suff=false;
        break;
    }
}
if(pre && suff)cout<<0<<'\n';
else if(pre && !suff)cout<<1<<'\n';
else if(!pre && suff)cout<<2<<'\n';
else cout<<3<<'\n';
return 0;
}