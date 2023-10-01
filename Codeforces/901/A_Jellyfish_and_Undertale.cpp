#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
ll a,b,n;
cin>>a>>b>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
ll x=1,ans=(b-1);
for(int i=0;i<n;i++){
    x=min(a,x+arr[i]);
    ans+=x-1;
    x=1;
}
cout<<ans+1<<'\n';
}
return 0;
}