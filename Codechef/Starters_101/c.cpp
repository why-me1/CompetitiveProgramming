#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n,h;
cin>>n>>h;
int a[n],pre[(int)1e5+5]={0};
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
    pre[i+1]=a[i]+pre[i];
}
if(pre[n]<h)cout<<0<<'\n';
else{
    for(int i=n-1;i>=0;i--){
        if(a[i]<h){
            h-=a[i];
        }
        else{
            cout<<a[i]<<'\n';
            break;
        }
    }
}
}
return 0;
}