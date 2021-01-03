#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	ll n;
	cin>>n;
	vector<ll> a(n);
	ll x=0,y;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(x<n)
	{
		if(a[x]>0)
		{
			cout<<a[x]<<endl;
			for(y=x+1;(y<n)&&a[x]>0&&(a[y]<0);y++)
			{
				ll ch = min(abs(a[x]),abs(a[y]));
				a[x]-=ch;
				a[y]+=ch;
				cout<<a[x]<<" "<<a[y]<<endl;
			}
		}
		x++;
	}
	// for(ll i=0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	ll ans = 0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]>0)
			ans+=a[i];
	}
	cout<<ans<<endl;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{		
		solve();
	}
}