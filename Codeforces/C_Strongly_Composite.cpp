#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define unique(x) x.erase(unique(all(x)), x.end());
#define set_bits(x) __builtin_popcountll(x)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
ll n,ans=0,extra=0;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    int number=a[i];
    for (int j = 2; j <= sqrt(number);j++)
    {
        while (number % j == 0)
        {
            mp[j]++;
            number/=j;
        }
    }
    if (number!=1) mp[number]++;
}
for(auto i:mp){
    ans+=(i.ss/2);
    extra+=(i.ss%2);
}
ans+=extra/3;
cout<<ans<<nl;
}
return 0;
}