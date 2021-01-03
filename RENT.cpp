#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n;

int main()
{
	fastio;
	ll t;
	//t=1;
	scanf("%lld",&t);
	while(t--)
	{		
		scanf("%lld",&n);
		pair<ll,ll> time[n];
		ll profit[n];
		for(ll i=0;i<n;i++)
		{
			scanf("%lld %lld %lld",&time[i].second,&time[i].first,&profit[i]);
			time[i].first+=time[i].second;
		}
		sort(time,time+n);
		vector<ll> dp(n,0);
		for(ll i=0;i<n;i++)
			dp[i] = profit[i];
		ll mx=0;
		for(ll i=1;i<n;i++)
		{
			for(ll j=0;j<i;j++)
			{
				if(time[j].first<=time[i].second)
					dp[i] = max(dp[i],dp[j]+profit[i]);
				else
					break;
			}
		}
		
		cout<<mx<<endl;
	}
	return 0;
}