#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
long long n,ans=1;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
a[0]+=1;
for(int i=0;i<n;i++)ans*=a[i];
cout<<ans<<'\n';
}
return 0;
}