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
int n,m;
cin>>n>>m;
int l[n][26],r[n][26];
vector<string>s(n);
for(int i=0;i<n;i++){
    cin>>s[i];
    for(int j=0;j<26;j++)l[i][j]=r[i][j]=-1;
    l[i][s[i][0]-'a']=0;
    for(int j=1;j<m;j++){
        if(s[i][j]!=s[i][j-1]){
            r[i][s[i][j-1]-'a']=j-1;
            l[i][s[i][j]-'a']=j;
        }
    }
    r[i][s[i][m-1]-'a']=m-1;
}
int q;
cin>>q;
while (q--)
{
   int a,b;
   cin>>a>>b;
   a--;
   b--;
   if(a==b){
    cout<<m<<nl;
   }
   else{
    int ans=0;
    for(int i=0;i<26;i++){
        if(l[a][i]==-1 || l[b][i]==-1)continue;
        ans+=max((min(r[a][i],r[b][i])-max(l[a][i],l[b][i])+1),0);
    }
    cout<<ans<<nl;
   }
}
return 0;
}