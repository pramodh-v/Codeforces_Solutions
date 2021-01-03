#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


using namespace std;

ll n,c;
ll func(ll num,ll array[])
{
    ll cows=1,prev=array[0];
    for (ll i=1; i<n; i++)
    {
        if (array[i]-prev>=num)
        {
            prev=array[i];
            cows++;
            if (cows==c)
                return 1;
        }
    }
    return 0;
}
ll bs(ll array[])
{
    ll l=0,r=array[n-1],max=-1;
    while (l<r)
    {
        ll mid=(l+r)/2;
        if (func(mid,array)==1)
        {
            if (mid>max)
                max=mid;
            l=mid+1;
        }
        else
            r=mid;
    }
    return max;
}
int main()
{
    ll t;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld %lld",&n,&c);
        ll array[n];
        for (ll i=0; i<n; i++)
            scanf("%d",&array[i]);
        sort(array,array+n);
        printf("%d\n",bs(array));
    }
    return 0;
}