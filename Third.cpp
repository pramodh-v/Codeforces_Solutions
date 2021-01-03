#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b;
    int ap = 0,bp = 0;
    cin>>n>>m>>a>>b;
    while(a>1)
    cout<<a--<<" "<<b<<endl;
    while(b>1)
    cout<<a<<" "<<b--<<endl;
    while(a<m)
    cout<<a++<<" "<<b<<endl;
    while(b<n)
    cout<<a<<" "<<b++<<endl;
    return 0;
}