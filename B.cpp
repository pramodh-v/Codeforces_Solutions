#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n;

int main()
{
    fastio;
    ll t;
    //t=1;
    scanf("%lld",&t);
    ll x = 20000;
    for(ll i=1;i<=t;i++)
    {
        ll ti;
        string s;
        cin >> ti >> s;
        if (x==20000)
        {
            if (s[0]!=83)
            {
                puts("NO");
                return 0;
            }
        }
        if (x==0)
        {
            if (s[0]!=78)
            {
                puts("NO");
                return 0;
            }
        }
        if (s[0]==83||s[0]==78)
        {
            if (ti>20000)
            {
                puts("NO");
                return 0;
            }
        }
        if (s[0]==83)
        {
            if (x-ti<0)
            {
                puts("NO");
                return 0;
            }
            else
                x-=ti;
        }
        if (s[0]==78)
        {
            if (x+ti>20000)
            {
                puts("NO");
                return 0;
            }
            else
                x+=ti;
        }
    }
    if (x==20000)
        puts("YES");
    else
        puts("NO");
    return 0;
}