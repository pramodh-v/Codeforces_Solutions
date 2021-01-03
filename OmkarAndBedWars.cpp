#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin >> t;

	while(t--)
	{
		cin >> n;

		string s;
		cin >> s;

		int cnt = 0;
		for(int i=n-1;i>=0 && s[0] == s[i];i--)
			cnt++;

		int c = n - cnt - 1, res = 0;

		for(int i=0;i<=c;i++)
		{
			cnt++;
			if(s[i] != s[i+1])
			{
				res += cnt/3;
				cnt = 0;
			}
		}

		int r = 0;
		if(cnt == n)
			r = (n+2)/3;
		else
			r = res + cnt/3;

		cout << r << "\n";
	}

	return 0;
}
