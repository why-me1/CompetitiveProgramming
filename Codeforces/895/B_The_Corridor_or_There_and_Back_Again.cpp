#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,mn=INT_MAX;
cin>>n;
vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    int d,s;
    cin>>d>>s;
    v.push_back({d,s});
}
sort(v.begin(),v.end());
for(auto i:v){
    int x=ceil(1.0*i.second/2),y=i.first;
    mn=min(mn,y+x);
}
cout<<mn-1<<'\n';
}
return 0;
}