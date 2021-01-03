#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

bool canHack(double n)
{
	if(n==1)
		return true;
	if(n<=0)
		return false;
	return canHack(n/10)||canHack(n/20);
}
void solve()
{
	ll n;
	cin>>n;
	(canHack((double)n))?cout<<"Yes"<<endl:cout<<"No"<<endl;
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