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

char mat[3][3],ans;

int f=0;

for(int i=0;i<3;i++)for(int j=0;j<3;j++)cin>>mat[i][j];

if(mat[0][0]==mat[1][1] && mat[1][1]==mat[2][2] && mat[0][0]!='.')ans=mat[0][0],f=1;

if(mat[0][2]==mat[1][1] && mat[1][1]==mat[2][0] && mat[0][2]!='.')ans=mat[0][2],f=1;

if(mat[0][1]==mat[0][2] && mat[0][2]==mat[0][0] && mat[0][0]!='.')ans=mat[0][0],f=1;

if(mat[1][1]==mat[1][2] && mat[1][2]==mat[1][0] && mat[1][0]!='.')ans=mat[1][0],f=1;

if(mat[2][1]==mat[2][2] && mat[2][2]==mat[2][0] && mat[2][0]!='.')ans=mat[2][0],f=1;

if(mat[0][1]==mat[1][1] && mat[1][1]==mat[2][1] && mat[0][1]!='.')ans=mat[0][1],f=1;

if(mat[0][0]==mat[1][0] && mat[1][0]==mat[2][0] && mat[0][0]!='.')ans=mat[0][0],f=1;

if(mat[0][2]==mat[1][2] && mat[1][2]==mat[2][2] && mat[0][2]!='.')ans=mat[0][2],f=1;

if(!f)cout<<"DRAW"<<nl;

else cout<<ans<<nl;
}
return 0;
}