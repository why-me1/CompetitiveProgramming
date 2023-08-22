#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ff first
#define ss second
#define pb push_back

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int n;
cin >> n;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
vector<pair<int,int>>v;
if(n&1){
    cout<<-1<<nl;
    continue;
}
for(int i=1;i<n;i+=2){
    if(a[i]==a[i+1]){
        v.pb({i,i+1});
    }
    else{
        v.pb({i,i});
        v.pb({i+1,i+1});
    }
}
cout<<v.size()<<nl;
for(auto i:v)cout<<i.ff<<" "<<i.ss<<nl;
}
return 0;
}