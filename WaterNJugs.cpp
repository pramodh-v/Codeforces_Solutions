#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
	return gcd(b,a%b);
}
ll pour(ll a,ll b,ll c)
{
    ll from = a;
    ll to = 0;
    ll step = 1;
    while(from!=c&&to!=c)
    {
        ll temp = min(from,b-to);
        
        to+=temp;
        from-=temp;
        
        step++;
        
        if(from==c||to==c)
            break;
    	
        if(from==0)
        {
            from = a;
            step++;
        }
        
        if(to==b)
        {
            to = 0;
            step++;
        }
    }
    return step;
}
ll jugs(ll a,ll b,ll c)
{
    if(a>b)
        swap(a,b);
    if(c>b)
        return -1;
	if((c%gcd(b,a))!=0)
        return -1;
	return min(pour(b,a,c),pour(a,b,c));
}
void solve()
{
	ll a,b,c;
    cin>>a>>b>>c;
    if(jugs(a,b,c)==-1)
        cout<<"No"<<endl;
    else 
        cout<<"Yes"<<endl;
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
    return 0;
}