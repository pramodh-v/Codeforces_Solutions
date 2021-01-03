#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int n = s.length();
	int flag = 1;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='#')
		{
			for(int j=i+1;j<n;j++)
			{
				// cout<<j-i<<" "<<n-j+i<<s[j]<<" "<<endl;
				if(s[j]=='#'&&j-i==n-j+i)
				{
					// cout<<j-i<<" "<<n-j+i<<endl;
					flag = 0;
					break;
				}
			}
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
    return 0;
}
