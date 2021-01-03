#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n, q,a,b;
ll v[100010];
ll asc[100010],desc[100010];

int main()
{
	fastio;
	scanf("%d %d", &n, &q);
    for (ll i=0 ; i<n ; i++)
        scanf("%d", &v[i]);
 
    asc[n-1] = desc[n-1] = 0;
    for (ll i=n-2 ; i>=0 ; i--) 
    {
        if (v[i] <= v[i+1]) 
        {
            asc[i] = 1 + asc[i+1];
        }
        else 
        {
            asc[i] = 0;
        }
 
        if (v[i] >= v[i+1]) 
        {
            desc[i] = 1 + desc[i+1];
        }
        else 
        {
            desc[i] = 0;
        }
    }
 
    while (q--) 
    {
        scanf("%d %d", &a, &b);
        a--, b--;
        bool ladder = false;
        if (b <= a+asc[a] || b <= a+desc[a] || b <= (a+asc[a]) + desc[a+asc[a]])
            ladder = true;
 
        printf(ladder ? "Yes\n" : "No\n");
    }
}