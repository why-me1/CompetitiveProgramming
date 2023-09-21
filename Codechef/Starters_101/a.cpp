#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,v1,v2;
cin>>n>>v1>>v2;
double x=ceil(1.0*n/v1),y=ceil(1.0*n/v2);
y+=1;
if(x-y>=0)cout<<x-y<<'\n';
else cout<<-1<<'\n';
}
return 0;
}