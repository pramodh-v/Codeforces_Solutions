#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n;

void solve()
{
	cin>>n;
	vector<ll> a(n);
	vector<ll> b(n);
	ll dp[1000][3];
	for(ll i=0;i<n;i++)
		cin>>a[i]>>b[i];
	dp[0][0] = 0;
	dp[0][1] = b[0];
	dp[0][2] = 2*b[0];
	for(ll i=1;i<n;i++)
	{
		for(ll j=0;j<3;j++)
		{
			dp[i][j] = 2e18;
			for(ll k=0;k<3;k++)
			{
				if((a[i-1]+k)!=(a[i]+j))
					dp[i][j] = min(dp[i][j],dp[i-1][k]+j*b[i]);
			}
		}
	}
	cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]))<<endl;
}
int main()
{
	fastio;
	ll t;
	//t=1;
	cin>>t;
	while(t--)
	{		
		solve();
	}
}