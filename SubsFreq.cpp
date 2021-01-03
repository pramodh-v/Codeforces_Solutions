#include<bits/stdc++.h>

using namespace std;
vector<ivector<int>>
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> out(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"The Permutations of Length "<<i<<" are"<<endl;
        DispPer(a,int);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}