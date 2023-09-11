#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,x,y;
cin>>n>>x>>y;
long long sum1=0,sum2=0,lc=n/lcm <long long> (x, y);
x=n/x,y=n/y,y-=lc,x-=lc;
sum2=1LL*y*(y+1)/2;
sum1=1LL*x*(n+(n-x+1))/2;
cout<<sum1-sum2<<'\n';
}
return 0;
}