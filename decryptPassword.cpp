#include <bits/stdc++.h>

using namespace std;

string decryptPassword(string s) {
    string res = "";
    stack<int> numSt;
    for(long unsigned int i=0;i<s.length();i++)
    {
        if(s[i]=='*')
        {	if(i>2)
            	swap(s[i-1],s[i-2]);
        }
        else if(s[i]>=49&&s[i]<=57)
            numSt.push((int)s[i]);
    }
    for(long unsigned int i=0;i<s.length();i++)
    {
    	if(s[i]=='*'||(s[i]>=49&&s[i]<=57))
    		continue;
    	else if(s[i]==48)
    	{
    		if(!numSt.empty())
    		{
    			res+=numSt.top();
    			numSt.pop();
    		}
    	}
    	else
    		res+=s[i];
    }
    return res;
}

int main()
{
    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
