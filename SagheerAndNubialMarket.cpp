#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n,s;

void solve()
{
	scanf("%lld %lld",&n,&s);
	vector<ll> a(n);
	for(ll i=0;i<n;i++)
	    cin>>a[i];
	ll l = 0,r = n,x=0,ans=0;
	while(l<=r)
	{
		ll mid = (l+r)/2;
		vector<ll> check;
		for(ll i=0;i<n;i++)
			check.push_back(a[i]+(i+1)*mid);
		ll sum = 0;
		for(ll i=0;i<mid;i++)
			sum+=check[i];
		if(sum<=s)
		{
			l = mid+1;
			x = mid;
			ans = sum;
		}
	}
	cout<<x<<" "<<ans<<endl;
}
int main()
{
	fastio;
	ll t;
	t=1;
	//scanf("%lld",&t);
	while(t--)
	{		
		solve();
	}
}