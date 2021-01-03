#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	vector<ll> a(6);
	for(ll i=0;i<6;i++)
	{
	    cin>>a[i];
	}
	ll n;
	cin>>n;
	vector<ll> b(n);
	for(ll i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	sort(a.begin(),a.end());
	// for(ll i=0;i<6;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	sort(b.begin(),b.end());
	// for(ll i=0;i<n;i++)
	// {
	// 	cout<<b[i]<<" ";
	// }
	//cout<<endl;
	ll ans[6][n];
	for(ll i=0;i<6;i++)
	{
	    for(ll j=0;j<n;j++)
	    {
	        ll x = b[j]-a[i];
	        //cout<<x<<" ";
	        if(x<=0)
	            x = 100000;
	        ans[i][j] = x;
	    }
	    //cout<<endl;
	}
	for(ll i=0;i<6;i++)
	{
	    for(ll j=0;j<n;j++)
	    {
	        cout<<ans[i][j]<<" ";
	    }
	    cout<<endl;
	}
	ll x = 0,y = 0;
	for(ll i=n-1;i>0;i--)
	{
		if(ans[5][i]!=100000)
			x = ans[5][i];
	}
	for(ll i=0;i<6;i++)
	{
		if(ans[i][0]!=100000)
			y = ans[i][0];
	}
	cout<<x-y<<endl;
}
int main()
{
	ll t;
	t=1;
	//cin>>t;
	while(t--)
	{		
		solve();
	}
}