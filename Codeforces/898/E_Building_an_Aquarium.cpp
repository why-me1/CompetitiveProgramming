#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
long long n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
long long l=-1,r=1e10;
while (l+1<r)
{
    long long mid=(l+r)/2,count=0;
    for(int i=0;i<n;i++)if(a[i]<mid)count+=mid-a[i];
    if(count>x)r=mid;
    else l=mid;
}
cout<<l<<'\n';
}
return 0;
}