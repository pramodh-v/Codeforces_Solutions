#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll w,h,n;

int main()
{
	fastio;
	ll t;
	t=1;
	//scanf("%lld",&t);
	while(t--)
	{		
		cin>>w>>h>>n;
		set<ll> wl,hl;
		wl.insert(0);
		wl.insert(w);
		hl.insert(0);
		hl.insert(h);
		multiset<ll> wmax,hmax;
		wmax.insert(w);
		hmax.insert(h);
		set<ll>::iterator r,l,it;
		multiset<ll>::iterator m;
		for(ll i=0;i<n;i++)
		{
			char s;
			ll x;
			cin>>s>>x;
			if(s=='V')
			{
				r = it = wl.lower_bound(x);
				l = --it;
				ll g = *r - *l;

				m = wmax.find(g);
				wmax.erase(m);
				wmax.insert(*r - x);
				wmax.insert(x - *l);

				wl.insert(x);
			}
			else
			{
				r = it = hl.lower_bound(x);
				l = --it;
				ll g = *r - *l;

				m = hmax.find(g);
				hmax.erase(m);
				hmax.insert(*r - x);
				hmax.insert(x - *l);

				hl.insert(x);	
			}
			cout<<(ll)((*hmax.rbegin()) * (*wmax.rbegin()))<<endl;
		}
	}
	return 0;
}