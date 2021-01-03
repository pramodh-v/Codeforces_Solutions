#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int x1,y1,z1,x2,y2,z2;
		cin>>x1>>y1>>z1;
		cin>>x2>>y2>>z2;
		int sum = 0;
		sum+=min(z1,y2);
		z1-=min(z1,y2);
		z1-=min(z1,x2);
		if(z1>0)
		{
			z2-=min(z2,z1);
		}
		x2-=min(z1,x2);
		y2-=min(z1,y2);
		x1-=min(x1,z2);
		x1-=min(x1,y2);
		if(x1>0)
		{
			x2-=min(x1,x2);
		}
		z2-=min(z2,x1);
		y2-=min(y2,x1);
		cout<<x1<<" "<<y1<<" "<<z1<<endl;
		cout<<x2<<" "<<y2<<" "<<z2<<endl;
	}
	return 0;
}