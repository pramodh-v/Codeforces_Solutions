#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

const ll M = 1e3+5;
ll m,n;
ll dp[M][2];
ll xpos[M],ypos[M];

ll helper(ll pos,ll flag)
{
    if(pos==n)
        return 0;
    
}
void solve()
{
    cin>>m>>n;
    for(ll i=0;i<n;i++)
        cin>>xpos[i]>>ypos[i];
    memset(dp,M,sizeof(dp));
    dp[0][0] = abs(xpos[0]-ypos[0]);
    helper(1,0);
    cout<<min(dp[n-1][0],dp[n-1][1])<<endl;
}
int main()
{
    fastio;
    ll t;
    //t=1;
    scanf("%lld",&t);
    while(t--)
    {       
        solve();
    }
}