#include<bits/stdc++.h>

using namespace std;
bool canBuild(map<int,int> m)
{
	int no1=0,no2 = 0,no4=0,no6=0;
	for(auto i:m)
	{
		if(i.second>=8)
			return 1;
		else if(i.second>=6)
		{
			no6++;
			if(no6>1)
				return 1;
		}
		else if(i.second>=4)
		{
			no4++;
			if(no6&&no4||(n04)>1)
				return 1;
		}
		else if(i.second>=2)
		{
			no2++;
			if(no6&&no2||(n04&&no2>1))
				return 1;
		}
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,x;
	cin>>n;
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		m[x]++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		char c;
		int l;
		cin>>c>>l;
		if(c=='+')
		{
			m[l]++;
			n++;
		}
		else
		{
			m[l]--;
			n--;
		}
		if(n<8)
			cout<<"NO"<<endl;
		else if(canBuild(m))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}