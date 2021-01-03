#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll mi_change(string s,int a,int b)
{
	ll cnt = 0,li=0,ri;
	for(ll i=0;i<s.length();i++)
	{
		if((s[i]-'0')==a)
		{
			li = i;
			//cout<<li<<endl;
			break;
		}
	}
	for(ll i=s.length()-1;i>=0;i--)
	{
		if((s[i]-'0')==a)
		{
			ri = i;
			//cout<<ri<<endl;
			break;
		}
	}
	aezfmwi
	sncmbea
	for(ll i=li;i<ri;i++)
	{
		if((s[i]-'0')==b)
			cnt++;
	}
	return cnt;
}
void solve()
{
	string s;
	cin>>s;
	if(s.length()<3)
		cout<<0<<endl;
	else
	{
		cout<<max(mi_change(s,0,1),mi_change(s,1,0))<<endl;
	}
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