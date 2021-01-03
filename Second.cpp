#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    int fin = 0;
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        int s=a[i]+a[j];
        int cnt=0;
        int x=i,y=j;
        while(x<y)
        {
          if(a[x]+a[y]>s)
          {
            y--;
          }
          else if(a[x]+a[y]<s)
          {
            x++;
          }
          else if(a[x]+a[y]==s)
          {
            x++;
            y--;
            cnt++;
          }
        }
        fin=max(fin,cnt);
      }
    }
    cout<<fin<<endl;
  }
  return 0;
}