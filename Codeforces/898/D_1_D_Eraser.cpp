#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,k,ans=0;
cin>>n>>k;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='B'){
        ans++;
        i+=k-1;
    }
}
cout<<ans<<'\n';
}
return 0;
}