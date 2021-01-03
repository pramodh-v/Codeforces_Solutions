#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n;

void solve()
{
	ll sum = 0,onet = 0,ans = 0;
	cin>>n;
	vector<ll> a(n);
	cin>>a[0];
	for(ll i=1;i<n;i++)
		cin>>a[i],a[i]+=a[i-1];
	for(ll i=0;i<n-1;i++)
	{
		if(a[i]*3==a[n-1]*2)
			ans+=onet;
		if(a[i]*3==a[n-1])
			onet++;
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