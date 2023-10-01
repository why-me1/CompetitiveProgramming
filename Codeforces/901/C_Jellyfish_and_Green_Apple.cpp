#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
ll m,n,ans=0;
cin>>m>>n;
while(m<n){
    ans+=m;
    m*=2;
}
ll rem=m%n;
if(rem==0){
    cout<<ans<<'\n';
    continue;
}
bool ok=false;
int c=0;
while(c<20)
{
   ans+=rem;
   rem*=2;
   if(rem==n){
    ok=true;
    break;
   }
   if(rem>n){
    rem=rem-n;
    c++;
   }
}
if(ok)cout<<ans<<'\n';
else cout<<-1<<'\n';

}
return 0;
}