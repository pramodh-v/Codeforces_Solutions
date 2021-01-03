#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	ll n,ans = 1;
	cin>>n;
	vector<ll> l(n,1),r(n,1);
	vector<ll> a(n);
	for(ll i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(ll i=1;i<n;i++)
	{
	    if(a[i-1]<a[i])
	        l[i] = l[i-1]+1;
	    ans = max(ans,l[i]);
	}
	//cout<<ans<<endl;
	for(ll i=n-2;i>=0;i--)
	{
	    if(a[i]<a[i+1])
	        r[i] = r[i+1]+1;
	    ans = max(ans,r[i]);
	}
	//cout<<ans<<endl;
	for(ll i=0;i<n-2;i++)
    {
        if(a[i]<a[i+2])
            ans = max(ans,l[i]+r[i+2]);
    }
    cout<<ans<<endl;
}
int main()
{
	fastio;
	ll t;
	t=1;
	//cin>>t;
	while(t--)
	{		
		solve();
	}
}