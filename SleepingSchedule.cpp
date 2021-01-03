#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n,h,l,r,sum;
ll dp[2005][2005];

void solve()
{
	cin>>n>>h>>l>>r;
	ll ans = 0;
    for (int i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		sum+=x;
		for (ll j=0;j<=i;j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
			if (((sum-j)%h)<=r && ((sum-j)%h)>=l) dp[i][j]++;
			if (i==n) ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans;
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