#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n,x;

void solve()
{
	cin>>n>>x;
	vector<ll> a(n);
	for(ll i=0;i<n;i++)
		cin>>a[i];
	ll i=0,cnt=0;
	while(!is_sorted(a.begin(),a.end())&&i<n)
	{
		if(a[i]>x)
		{
			cnt++;
			swap(a[i],x);
		}
		i++;
	}	
	cout<<(is_sorted(a.begin(),a.end())?cnt:-1)<<endl;
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