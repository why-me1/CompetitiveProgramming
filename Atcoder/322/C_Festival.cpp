#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++)cin>>a[i];
int x=a[0],j=0;
for(int i=1;i<=n;i++){
    cout<<x-i<<'\n';
    if(x-i==0){
        j++;
        x=a[j];
    }
}
return 0;
}