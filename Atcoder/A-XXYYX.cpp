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
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define unique(x) x.erase(unique(all(x)), x.end());

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int n,a,b,c,d;
cin>>n>>a>>b>>c>>d;
if(n==1){
    cout<<"Yes"<<nl;
}
else if(b>(n/2) || c>(n/2))cout<<"No"<<nl;

else if(b<=(n/2) && c<=(n/2)){
    if(b==c+1 || c==b+1 || b==c)cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
}
else if(a+d == n-1) {
    if(a == 0 || d == 0)
    cout << "Yes" << nl;
    else
    cout << "No" << nl;

}
else cout<<"Yes"<<nl;
return 0;
}
