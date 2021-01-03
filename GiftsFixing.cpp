#include<bits/stdc++.h>

using namespace std;
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ma=1;
	stack<int> st;
	vector<int> size;
	st.push(s[0]);
	size.push_back(1);
	for(int i=1;i<s.length();i++)
	{	
		if(!st.empty())
			if(s[i]!=st.top())
			{
				st.pop();
				size.push_back((int)st.size()+1);
			}
			else
			{	
				st.push(s[i]);
				size.push_back((int)st.size());
			}
		else
		{
			st.push(s[i]);
			size.push_back((int)st.size());
		}
		ma = max(ma,(int)st.size());
	}
	cout<<ma<<endl;
	for(int i=0;i<size.size();i++)
	{
		if(size[i])
		cout<<size[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}