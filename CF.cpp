#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n;
	cin>>n;
	vector<long long int> a(n);
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int ans = abs(a[0]-1);
	long long int sq = ceil(pow(a[n-1],1.0/n-1));
	ans+=abs(a[1]-sq);
	//cout<<ans<<endl;
	for(int i=2;i<n;i++)
	{
		//cout<<pow(sq,i)<<endl;
		ans+=abs(a[i]-pow(sq,i));
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}