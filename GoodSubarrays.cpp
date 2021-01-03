#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	ll n,sum=0,ans=0;
	string s;
	map<ll,ll> freq;
	freq[0]=1;
	cin>>n;
	cin>>s;
	for(ll i=0;i<n;i++)
	{
	    ll x = s[i]-'1';
	    sum+=x;
	    ans+=freq[sum];
	    freq[sum]++;
	}
	cout<<ans<<endl;
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