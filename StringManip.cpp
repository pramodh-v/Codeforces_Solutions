#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	ll n,q;
	string s,s1 = "";
	cin>>n>>s>>q;
	for(ll i=0;i<n;i++)
	{
		s1+=s;
	}
	n = s1.size();
	// vector<ll> v[30];
	map<char,vector<ll>> m;
	for(ll i=0;i<n;i++)
	{
		m[s1[i]].push_back(i);
	}
	for(ll i=0;i<q;i++)
	{
		ll k;
		char ch;
		cin>>k>>ch;
		//cout<<*(m[ch].begin()+k-1)<<endl;
		s1[*(m[ch].begin()+k-1)] = '!';
		m[ch].erase(m[ch].begin()+k-1);
	}
	// for(auto it:m)
	// {
	// 	cout<<it.first<<":";
	// 	for(int j:it.second)
	// 		cout<<j<<" ";
	// 	cout<<endl;
	// }
	for(ll i=0;i<n;i++)
	{
		if(s1[i]!='!')
			cout<<s1[i];
	}
	cout<<endl;
}
int main()
{
	ll t;
	t=1;
	//cin>>t;
	while(t--)
	{		
		solve();
	}
}