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
int odd=0,even=0,ans=9,ans1=9;
string s;
cin>>s;
for(int i=0;i<10;i++){
    if(s[i]=='1' && i%2==0)even++;
    if(s[i]=='1' && i&1)odd++;
    if(s[i]=='?' && i%2==0){
        even++;
    }
    int x=abs(odd-even);
    if(i&1){
        if((9-i)/2<x){
            ans=i;
            break;
        }        
    }
    else{
        if(even<odd){
            if((9-i)/2<x){
            ans=i;
            break;
        } 
        }
        else if(odd<even){
            if(((9-i)/2)+1<x){
                ans=i;
                break;
            }
        }
    }
}
even=0,odd=0;
for(int i=0;i<10;i++){
    if(s[i]=='1' && i%2==0)even++;
    if(s[i]=='1' && i&1)odd++;
    if(s[i]=='?' && i&1){
        odd++;
    }
    int x=abs(odd-even);
    if(i&1){
        if((9-i)/2<x){
            ans1=i;
            break;
        }        
    }
    else{
        if(even<odd){
            if((9-i)/2<x){
            ans1=i;
            break;
        } 
        }
        else if(odd<even){
            if(((9-i)/2)+1<x){
                ans1=i;
                break;
            }
        }
    }
}
cout<<min(ans+1,ans1+1)<<nl;
}
return 0;
}