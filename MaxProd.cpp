#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	ll n;
	cin>>n;
	vector<ll> a(n);
	vector<ll> neg;
	vector<ll> pos;
	ll posprod = 0,negprod = 0;	
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		// if(a[i]<0)
		// 	neg.push_back(a[i]);
		// else
		// 	pos.push_back(a[i]);
	}
	sort(a.begin(),a.end(),greater<int>());
	ll x1 = 1;
	for(ll i=0;i<5;i++)
	{
		x1*=a[i];
	}
	ll x2 = a[0]*a[n-1]*a[n-2]*a[n-3]*a[n-4];
	ll x3 = a[0]*a[1]*a[2]*a[n-1]*a[n-2];
	//ll x4 = 0;
	//cout<<x1<<" "<<x2<<" "<<x3<<" "<<endl;
	cout<<max(x1,max(x2,x3))<<endl;
}
int main()
{
	ll t;
	//t=1;
	cin>>t;
	while(t--)
	{		
		solve();
	}
}