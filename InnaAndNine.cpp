#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    ll n,m,i,j=0,k=1;
    cin>>s;
    n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]+s[i+1]-'0'-'0'==9)
        {
            ++j;
        }
        else if(j%2==0)
        {
            k = k * (1+ j/2);
            j = 0;
        }
        else
            j = 0;
    }
    cout<<k<<endl;
}
