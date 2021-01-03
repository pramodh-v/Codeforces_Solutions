#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        b[i] = max(a[i],b[i+1]);
    }
    // for(int i=0;i<n;i++)
    // {
    // 	cout<<b[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        (b[i]==b[i+1])?cout<<b[i]-a[i]+1<<" ":cout<<0<<" ";
    }
    cout<<endl;
    return 0;
}