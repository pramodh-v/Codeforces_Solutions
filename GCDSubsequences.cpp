#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

vector<ll> factors[100005];

void solve()
{
	vector<ll> mx(100005,0);
	for(ll i=2;i<100005;i++)
	{
		for(ll j=i;j<100005;j+=i)
			factors[j].push_back(i);
	}
	ll n;
	cin>>n;
	vector<ll> a(n);
	vector<ll> dp(n,1);
	ll m=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		for(ll x:factors[a[i]])
			dp[i] = max(dp[i], mx[x]+1);
		for(ll x:factors[a[i]])
			mx[x] = dp[i];
		m = max(dp[i],m);
	}
	cout<<m<<endl;
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