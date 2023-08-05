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
int n,ans=0;
cin>>n;
char mat[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)cin>>mat[i][j];
}
for(int i=0;i<n/2;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            int p1=j,p2=i,p3=n-i-1,p4=n-i-1,c=n-(2*i)-1;
            while(c){
                int one=0,zero=0;
                if(mat[i][p1]=='0')zero++;
                else one++;
                if(mat[p2][n-i-1]=='0')zero++;
                else one++;
                if(mat[n-i-1][p3]=='0')zero++;
                else one++;
                if(mat[p4][j]=='0')zero++;
                else one++;
                ans+=min(one,zero);
                p1++;
                p2++;
                p3--;
                p4--;
                c--;
            }
        }
    }
}
cout<<ans<<nl;
}
return 0;
}