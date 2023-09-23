#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
string s;
cin>>s;
vector<int>v;
int n=s.size(),totalA=0;
for(int i=0;i<n;i++)if(s[i]=='A')totalA++;
bool flag=true;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        int cnt=1,j=i+1;
        while (s[j]=='A' && j<n)
        {
            cnt++;
            j++;
        }
        v.push_back(cnt);
        i=j;
        if(j==n)flag=false;       
    }
    else{
        int cnt=0,j=i+1;
        while (s[j]=='A' && j<n)
        {
            cnt++;
            j++;
        }
        v.push_back(cnt);
        i=j-1;
    }
}
sort(v.begin(),v.end());
if(!flag)cout<<totalA-v[0]<<'\n';
else cout<<totalA<<'\n';

}
return 0;
}