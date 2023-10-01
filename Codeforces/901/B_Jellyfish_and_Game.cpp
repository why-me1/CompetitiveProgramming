#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
ll n,m,k,ans=0;
cin>>n>>m>>k;
int a[n],b[m];
for(int i=0;i<n;i++)cin>>a[i],ans+=a[i];
for(int i=0;i<m;i++)cin>>b[i];
vector<ll>v;
for(int i=1;i<=min(k,2LL);i++){
sort(a,a+n);
sort(b,b+m);
    if(i&1){
        int mn1=*min_element(a,a+n);
        int mx2=*max_element(b,b+m);
        if(mn1<mx2){
            ans-=mn1;
            ans+=mx2;
            int indx1=lower_bound(a,a+n,mn1)-a;
            int indx2=lower_bound(b,b+m,mx2)-b;
            swap(a[indx1],b[indx2]);
        }
        v.push_back(ans);
    }
    else{
        int mn2=*min_element(b,b+m);
        int mx1=*max_element(a,a+n);
        if(mn2<mx1){
            ans-=mx1;
            ans+=mn2;
            int indx1=lower_bound(a,a+n,mx1)-a;
            int indx2=lower_bound(b,b+m,mn2)-b;
            swap(a[indx1],b[indx2]);
        }
        v.push_back(ans);
    }
}
if(k&1)cout<<v[0]<<'\n';
else cout<<v[1]<<'\n';
}
return 0;
}