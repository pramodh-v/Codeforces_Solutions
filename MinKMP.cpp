#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {	
    string s,t,s1,sx;
    cin >> s >> t;
    int freq[27] = {0},x[27];
    for(auto i:s)
    {
      freq[i-'a']++;        
    }
    for(auto i:t)
    {
      freq[i-'a']--; 
    }
    for(int i=0;i<26;i++)
    {
        x[i] = freq[i];
    }
    for(int i=0;i<=(t[0]-'a'); i++)
    {   
      while(freq[i]>0)
      {
        s1+=(char)(i + 97);
        freq[i]--;
      }
    }
    s1+=t;
    for(int i=0;i<26;i++)
    {
      while(freq[i]>0)
      {
        s1+=(char)(i+97);
        freq[i]--;
      }
    }
    for(int i=0;i<t[0]-'a';i++)
    {
      while(x[i]!=0)
      {
        sx+=(char)(i+97);
        x[i]--;
      }
    }
    sx+=t;
    for(int i=0;i<26;i++)
    {
      while(x[i]!=0)
      {
        sx+=(char)(i+97);
        x[i]--;
      }
    }
    cout<<min(s1,sx)<<endl;
  }
}