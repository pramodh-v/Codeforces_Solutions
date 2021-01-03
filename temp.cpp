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
        int n,x=1,ans=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int> a(n);
        for(int i=0;i<s.length();i++)
        {
            a[i] = s[i]-'0';
        }
        int cursum = 0;
        map<int,int> sums;
        for(int i=0;i<n;i++)
        {
            cursum+=a[i];
            if(cursum==x)
            {   
                ans++;
            }
            if(sums.find(cursum-x)!=sums.end())
            {
                ans+=(sums[cursum-x]);
            }
            for(int j=0;j<a[i];j++)
            sums[cursum-j]++;
            x++;
            if(x==9)
                x=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}