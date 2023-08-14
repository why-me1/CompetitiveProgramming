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
int m,u=1,d=1,st=-1,f=0;
cin>>m;
char a[2][m];
for(int i=0;i<2;i++){
    for(int j=0;j<m;j++)cin>>a[i][j];
}
for(int j=0;j<m;j++){
    int c=0;
    if(a[0][j]=='B')c++;
    if(a[1][j]=='B')c++;
    if(c==0 && f==1){
        st=j;    
        break;
    }
    if(c==1){
        f=1;
        if(a[0][j]=='B'){
            if(u==1){
                d=0;
            }
            else{
                st=j;
                break;
            }
        }
        if(a[1][j]=='B'){
            if(d==1){
                u=0;
            }
            else{
                st=j;
                break;
            }
        }
    }
    else{
        swap(u,d);
        f=1;
    }
}
if(st==-1){
    yes;
    continue;
}
int c=0;
for(int j=st;j<m;j++){
    if(a[0][j]=='B')c++;
    if(a[1][j]=='B')c++;
}
if(c>0)no;
else yes;
}
return 0;
}