#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

//ll n;

void solve()
{
	//cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	sort(s1.begin(),s1.end());
	ll prev = -1;
	while(next_permutation(s1.begin(),s1.end()))
	{
		if(stoll(s1)<=stoll(s2))
			prev = stoll(s1);
	}
	cout<<prev<<endl;
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