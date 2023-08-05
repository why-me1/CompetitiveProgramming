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
int n,m;
cin>>n>>m;
char mat[n][m];
for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>mat[i][j];
for(int i=n-1;i<n;i++){
    int pos=i;
    for(int j=0;j<m;j++){
        if(mat[i][j]=='o')pos=i-1;
        for(int k=i;k>=0;k--){
            if(mat[k][j]=='*'){
                swap(mat[k][j],mat[pos][j]);
                pos--;
            }
            else if(mat[k][j]=='o'){
                pos=k-1;
            }
        }
        pos=i;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<mat[i][j];
    }
    cout<<nl;
}
}
return 0;
}