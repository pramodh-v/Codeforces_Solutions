#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll n;

void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n][n];
    ll y=m+1;
    vector<pair<ll,ll>>v;
    ll c[n+1]={0},r[n+1]={0};
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
        r[x]++;
        c[y]++;
        if(x==y)
        {
            y--;
        }
    }
    ll x=0;
    for(ll i=0;i<m;i++)
    {
        if(v[i].first==v[i].second)
            continue;
        if(c[v[i].first]==0)
        {
            x++;
            r[v[i].second]=0;
        }
        else if(r[v[i].second]==0)
        {
            x++;
            c[v[i].first]=0;
        }
        else
        {
            x+=2;
            r[v[i].first]=0;
            c[v[i].second]=0;
        }
    }
    cout<<x<<endl; 
}
int main()
{
    fastio;
    ll t;
    //t=1;
    cin>>t;
    while(t--)
    {       
        solve();
    }
}