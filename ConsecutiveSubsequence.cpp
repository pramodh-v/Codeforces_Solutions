#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n;

void solve()
{
    ll mx = 0,end=0,idx = -1;
	cin>>n;	
	vector<ll> a(n+1);
	vector<ll> dp(201000);
	for(ll i=1;i<=n;i++)
	    cin>>a[i],dp[a[i]] = 0;
	for(ll i=1;i<=n;i++)
    {
        dp[a[i]] = dp[a[i]-1] + 1;
        if(dp[a[i]]>mx)
        {
            mx = dp[a[i]];
            end = a[i];
        }
    }
    cout<<mx<<endl;
    //cout<<end<<endl;
    ll start = end-mx+1;
    //cout<<start<<endl;
    for(ll i=1;i<=n;i++)
    	if(a[i]==start)
    	{
    		cout<<i<<" ";
    		start++;
    	}
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