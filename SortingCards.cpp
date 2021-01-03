#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define mod 998244353

using namespace std;
void solve()
{
	ll n,k,sum=0,prev=0,per=1,first=-1;
	cin>>n>>k;
	vector<ll> a(n);
	for(ll i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(ll i=0;i<n;i++)
	{
	    if(a[i]>n-k)
	    {
	        sum+=a[i];
	        if(first==-1)
	            first = 1;
	        else
	        {
	        per = per*(i-prev)%mod;
	        cout<<per<<" "<<prev<<endl;
	        prev=i;
	        }
	    }
	}
	cout<<sum<<" "<<per<<endl;
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