#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	string s;
	cin>>s;
	vector<ll> lb(s.size(),0);
	vector<ll> a(s.size(),0);
	vector<ll> rb(s.size(),0);
	lb[0] = (s[0]=='b');
	for(ll i=1;i<s.size();i++)
	{
		lb[i] = lb[i-1];
		a[i] = a[i-1];
	    if(s[i]=='b')
	    	lb[i]++;
	    else
	    	a[i]++;
	}
	rb[s.size()-1] = (s[s.size()-1]=='b');
	for(ll i=s.size()-1;i>=1;i--)
	{
		rb[i-1] = rb[i];
		if(s[i]=='b')
			rb[i-1]++;
	}
	ll ans = 0;
	for(ll i=0;i<s.size();i++)
	{
		for(ll j=0;j<s.size();j++)
		{
			ll x = lb[i]+rb[j];
			ll y = a[i]-a[j];
			ans = max(ans,s.size()-x-y);
		}
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