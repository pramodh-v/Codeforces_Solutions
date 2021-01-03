#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
	map<char,vector<ll>> indices;
	string s,t;
	ll ans = 1,nxt = -1;
	cin>>s>>t;
	for(ll i=0;i<s.length();i++)
		indices[s[i]].push_back(i);
	for(ll i=0;i<t.length();i++)
	{
		if(indices[t[i]].size()==0)
		{
			ans = -1;
			break;
		}
		ll idx = upper_bound(indices[t[i]].begin(),indices[t[i]].end(),nxt)-indices[t[i]].begin();
		if(idx==indices[t[i]].size())
			ans++,idx = 0;
		nxt = indices[t[i]][idx];
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