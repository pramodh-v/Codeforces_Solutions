#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
void solve()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	vector<ll> ans;
	ll k=0;
	ll b=0,w=0;
	for(ll i=0;i<n;i++)
	{
	    if(s[i]=='W')
	        w++;
	    else
	        b++;
	}
	if(b&1&&w&1)
	{
	    cout<<-1<<endl;
	}
	else
	{
	    for(ll i=1;i<n-1;i++)
	    {
	        if(s[i]!=s[i-1])
	        {
	            k++;
	            if(i<n-2)
	            {ans.push_back(i+2);
	            if(s[i+1]=='W')
	            {
	            	//cout<<s<<endl;
	                s[i+1]='B';
	                (s[i+2]=='W')?s[i+2]='B':s[i+2]='W';
	                //cout<<s<<endl;
	            }
	            else
	            {
	            	//cout<<s<<endl;
	            	s[i+1]='W';
	            	(s[i+2]=='W')?s[i+2]='B':s[i+2]='W';
	            	//cout<<s<<endl;
	            }}
	        }
	    }
	    if(s[n-1]!=s[n-2])
	    {
	    	k++;
	    	ans.push_back(n-1);
	    }
	    cout<<s<<endl;
	    cout<<k<<endl;
	    for(ll i=0;i<ans.size();i++)
	    {
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
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