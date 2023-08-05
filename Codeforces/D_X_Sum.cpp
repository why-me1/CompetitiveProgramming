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
ll n,m,mx=0;
cin>>n>>m;
int mat[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        ll sum=mat[i][j],a=i,b=j,c=i,d=j,e=i,f=j,g=i,h=j;
        //u,u
        while(true){
            a++;
            b++;
            if((a<0 || a>=n || b<0 || b>=m))break;
            else sum+=mat[a][b];
        }
        //d,d
        while(true){
            c--;
            d--;
            if((c<0 || c>=n || d<0 || d>=m))break;
            else sum+=mat[c][d];
        }
        //u,d
        while(true){            
            e++;
            f--;
            if((e<0 || e>=n || f<0 || f>=m))break;
            else sum+=mat[e][f];
        }
        //d,u
        while(true){           
            g--;
            h++;
            if((g<0 || g>=n || h<0 || h>=m))break;
            else sum+=mat[g][h];
        }
        mx=max(mx,sum);
    }
}
cout<<mx<<nl;
}
return 0;
}