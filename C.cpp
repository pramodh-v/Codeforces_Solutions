#include <bits/stdc++.h>

#define ll long long int 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    ll n,m;
    set<ll> row,col;
    cin>>n>>m;
    ll x = m,add=0;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
            x--;

        if(col.find(a)!=col.end()||row.find(b)!=row.end())
            add++;
            row.insert(a);
            col.insert(b);
    }
    cout<<x+add<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}