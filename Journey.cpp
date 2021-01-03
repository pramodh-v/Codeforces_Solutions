#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

vector<ll> adj[100005];
vector<ll> dist(100005);
vector<ll> leaves;
ll leaf=0;

void dfs(ll ch,ll par,ll dis)
{
	ll flag=0;
	if(adj[ch].size())
		for(auto child:adj[ch])
			if(child!=par)
			{
				flag=1;
				dfs(child,ch,dis+1);
			}
	if(flag==0)
	{
		leaves.push_back(dis);
		leaf++;
	}
	return ;
}
void solve()
{
	ll n;
	cin>>n;
	for(ll i=0;i<n-1;i++)
	{
		ll x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	ll sum=0;
	dfs(1,0,0);
	//cout<<leaf<<endl;
	// for(ll i=0;i<leaves.size();i++)
	// 	cout<<leaves[i]<<" ";
	for(ll i=0;i<leaf;i++)
		sum+=leaves[i];
	cout<<fixed<<setprecision(10)<<((double)sum/leaf)<<endl;
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