#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	ll n;
	cin>>n;
	if(n>=0&&n<=9)
		cout<<to_string(n)<<endl;
	else
	{
		string s = "";
		stack<int> st;
	for(ll i=9;i>=2&&n>1;i--)
	{
		if(n%i==0)
		{n/=i;st.push(i);}
	}
	if(n!=1)
		cout<<to_string(-1)<<endl;
	else
	{
		while(!st.empty())
		{
			s+=to_string(st.top());
			st.pop();
		}
		cout<<s<<endl;
	}
	}
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