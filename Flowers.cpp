#include<bits/stdc++.h>
#define ll long long int 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007

using namespace std;

ll t,k;
ll prefix[100001];
ll dp[100001];

ll NoOfWays(ll x)
{
	if(x==0)
		return 1;
	if(dp[x]!=-1)
		return dp[x];
	ll ans = 0;
	if(x>=k)
		ans+=NoOfWays(x-k),ans%=mod;
	ans+=NoOfWays(x-1);
	ans%=mod;
	return dp[x] = ans;
}
void FillDP()
{
	memset(dp,-1,sizeof(dp));
	for(ll i=1;i<100000;i++)
	{
		prefix[i] = prefix[i-1]+NoOfWays(i),prefix[i]%=mod;
	}
}
int main()
{
	fastio;
	cin>>t>>k;
	while(t--)
	{
		ll a,b,ans = 0;
		cin>>a>>b;
		FillDP();
		ans = (prefix[b] - prefix[a-1] + mod)%mod;
		cout<<ans<<endl;
	}
	return 0;
}