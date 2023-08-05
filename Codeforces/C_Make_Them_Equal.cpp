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
#define mk make_pair
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
int n,f=0,ans;
cin>>n;
char ch;
cin>>ch;
string a,b;
cin>>a;
b=a;
unique(b);
if(b.size()==1 && b[0]==ch){
    cout<<0<<nl;
    continue;
}
for(int i=n/2;i<n;i++){
    if(a[i]==ch){
        f=1;
        ans=i+1;
        break;
    }
}
if(f){
    cout<<1<<nl;
    cout<<ans<<nl;
}
else{
    cout<<2<<nl;
    cout<<n<<" "<<n-1<<nl;
}
}
return 0;
}