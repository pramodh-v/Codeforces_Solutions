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
		int m1 = min(z1,y2);
		int m2 = 0;
		sum+=2*m1;
		z1-=m1;
		if(z1>0)m2 = min(z1,x2);
		z1-=m2;
		if(z1>0)
		{
			z2-=min(z1,z2);
		}
		y2-=m1;
		x2-=m2;
		int m3 = min(x1,z2);
		int m4 = min(x1,y2);
		cout<<x2<<" "<<y2<<" "<<z2<<endl;
		cout<<x1<<" "<<y1<<" "<<z1<<endl;
		cout<<m3<<" "<<m4<<endl;
	}
	return 0;
}