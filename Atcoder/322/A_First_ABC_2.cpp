#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
//int t; cin >> t; while(t--){
int n,ans=-1;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n-2;i++){
    if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
        ans=i+1;
        break;
    }
}
cout<<ans<<'\n';
//}
return 0;
}