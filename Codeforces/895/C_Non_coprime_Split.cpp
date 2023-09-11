#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
int l,r,f=0,a,b;
cin>>l>>r;
for(int i=l;i<=r;i++){
    if(i%2==0 && i!=2){
        a=i/2,b=i/2,f=1;
        break;
    }
}
if(f)cout<<a<<" "<<b<<'\n';
else{
    f=0;
    if(l==r && isprime(l)){
        cout<<-1<<'\n';
        continue;
    }
    for(int i=2;i<=r/2;i++){
        if(__gcd(i,r-i)!=1){
            a=i,b=r-i,f=1;
            break;
        }
    }
    if(f) cout<<a<<" "<<b<<'\n';
    else cout<<-1<<'\n';
}
}
return 0;
}