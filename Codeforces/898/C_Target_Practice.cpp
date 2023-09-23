#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin >> t; while(t--){
char a[10][10];
map<int,int>mp;
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        cin>>a[i][j];
        if(a[i][j]=='X'){
            if(i==0 || j==0 || i==9 || j==9)mp[1]++;
            else if(i==1 || j==1 || i==8 || j==8)mp[2]++;
            else if(i==2 || j==2 || i==7 || j==7)mp[3]++;
            else if(i==3 || j==3 || i==6 || j==6)mp[4]++;
            else if(i==4 || j==4 || i==5 || j==5)mp[5]++;
        }
    }
}
int ans=0;
for(int i=1;i<=5;i++)ans+=(i*mp[i]);
cout<<ans<<'\n';

}
return 0;
}