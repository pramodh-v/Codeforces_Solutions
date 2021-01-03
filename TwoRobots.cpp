#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

const ll M = 1005;
ll m,n;
ll dp[M][M];
ll xpos[M],ypos[M];

ll helper(ll pos1,ll pos2,ll xpos[],ll ypos[])
{
	if(pos1==n-1||pos2==n-1)
		return 0;
	if(pos1==-1&&pos2==-1)
		return min(abs(xpos[0]-ypos[0]) + helper(0,pos2,xpos,ypos),
				    abs(xpos[0]-ypos[0]) + helper(pos1,0,xpos,ypos));
	if(pos1>=0&&pos2==-1)
		return min(abs(xpos[pos1+1]-ypos[pos1+1]) + helper(pos1,pos1+1,xpos,ypos),
				   abs(xpos[pos1+1]-ypos[pos1]) + abs(xpos[pos1+1]-ypos[pos1+1]) + helper(pos1+1,pos2,xpos,ypos));
	if(pos1==-1&&pos2>=0)
		return min(abs(xpos[pos2+1]-ypos[pos2+1]) + helper(pos2+1,pos2,xpos,ypos),
			       abs(xpos[pos2+1]-ypos[pos2]) + abs(xpos[pos2+1]-ypos[pos2+1]) + helper(pos1,pos2+1,xpos,ypos));
	if(dp[pos1][pos2]!=-1)
		return dp[pos1][pos2];
	ll ans = min(abs(xpos[max(pos1,pos2)+1]-ypos[pos1])+abs(xpos[max(pos1,pos2)+1]-ypos[max(pos1,pos2)+1]) + helper(max(pos1,pos2)+1,pos2,xpos,ypos),
				 abs(xpos[max(pos1,pos2)+1]-ypos[pos2])+abs(xpos[max(pos1,pos2)+1]-ypos[max(pos1,pos2)+1]) + helper(pos1,max(pos1,pos2)+1,xpos,ypos));
	return dp[pos1][pos2] = ans;
}
void solve()
{
	cin>>m>>n;
	memset(dp,-1,sizeof(dp));
	for(ll i=0;i<n;i++)
	{
		cin>>xpos[i]>>ypos[i];
	}
	cout<<helper(-1,-1,xpos,ypos)<<endl;
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