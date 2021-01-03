#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

vector<ll> adj[1010];
vector<bool> visited(1010);

ll dfs(ll x)
{
	visited[x] = 1;
	ll maxdist = 0;
	for(auto ch:adj[x])
	{	
		if(!visited[ch])
			maxdist = max(maxdist,1+dfs(ch));
	}
	return maxdist;
}
void solve()
{
	ll notoys,ans=0;
	cin>>notoys;
	for(ll i=0;i<notoys;i++)
	{
		ll n;
		cin>>n;
		for(ll i=0;i<1010;i++)
			adj[i].clear();
		for(ll i=0;i<n-1;i++)
		{
			ll x,y;
			cin>>x>>y;
			x--;y--;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		ll maxdist = 0;
		for(ll i=0;i<n;i++)
		{
			for(ll i=0;i<1010;i++)
				visited[i] = false;
			maxdist = max(maxdist,dfs(i));
		}
		ans+=maxdist;
		//cout<<maxdist<<" "<<ans<<endl;
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