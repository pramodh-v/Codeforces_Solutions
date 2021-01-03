#include<bits/stdc++.h>

using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	vector<int> dp(n,1);
	for(int i=1;i<=n;i++)
	{
		for(int j=2*i;j<=n;j+=i)
		{
			if(a[j]>a[i])
				dp[j] = max(dp[j],dp[i]+1);
		}
	}
	int m = 0;
	for(auto i:dp)
		{	cout<<i<<endl;
			m = max(m,i);
		}
	cout<<m<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}