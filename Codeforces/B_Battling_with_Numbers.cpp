#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod=998244353;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

ll n;
cin>>n;
ll prime1[n],power1[n];
for(int i=0;i<n;i++)cin>>prime1[i];
for(int i=0;i<n;i++)cin>>power1[i];
unordered_map<ll,ll>mp1,mp2;
for(int i=0;i<n;i++)mp1[prime1[i]]=power1[i];
ll m;
cin>>m;
ll prime2[m],power2[m];
for(int i=0;i<m;i++)cin>>prime2[i];
for(int i=0;i<m;i++)cin>>power2[i];
for(int i=0;i<m;i++)mp2[prime2[i]]=power2[i];
bool exist=true;
for(auto i:mp2){
    int f=i.first;
    int s=i.second;
    if(mp1[f]==0 || mp1[f]<s){
        exist=false;
        break;
    }
    else{
        mp1[f]-=s;
    }
}
if(!exist){
    cout<<0<<'\n';
}
else{
    ll freq1=0,freq2=0,ans;
    for(auto i:mp1){
        if(i.second==1)freq1++;
        else if(i.second>1) freq2++;
    }
    ans=binpow(2,freq1+freq2,mod);
    cout<<ans<<'\n';
}
return 0;
}