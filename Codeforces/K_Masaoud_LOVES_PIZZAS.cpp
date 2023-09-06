#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll l=0,r=0,count=0,ans=0,sum=0;
        while(l<n){
            while (r<n && sum+a[r]<x)
            {
                sum+=a[r];
                count++;
                r++;
            }
            ans+=count;
            sum-=a[l];
            l++;
            count--;
        }
        cout<<ans<<'\n';
    }
}