#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define mod 1000000007

using namespace std;
void solve()
{
	ll n,l,r;
	vector<ll> a(3,0);
	cin>>n>>l>>r;
	for(ll i=l;i<=r;i++)
	    a[i%3]++;
	//cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	ll dp[n+1][3];
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[0][2] = 0;
	dp[1][0] = a[0];
	dp[1][1] = a[1];
	dp[1][2] = a[2];
	for(ll i=2;i<=n;i++)
	{
	    dp[i][0] = (dp[i-1][0]*a[0] + dp[i-1][1]*a[2] + dp[i-1][2]*a[1])%mod;
	    dp[i][1] = (dp[i-1][0]*a[1] + dp[i-1][1]*a[0] + dp[i-1][2]*a[2])%mod;
	    dp[i][2] = (dp[i-1][0]*a[2] + dp[i-1][1]*a[1] + dp[i-1][2]*a[0])%mod;
	}
	cout<<dp[n][0]%mod<<endl;
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