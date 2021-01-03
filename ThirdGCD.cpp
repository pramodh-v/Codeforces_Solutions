#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    bool flag = true;
    for(int i=0; i<n-1; i++)
        if(a[i+1] < a[i])
            flag = false;
    if(flag)
    {
        cout<< "YES"<<endl;
        continue;
    }
    else
    {
        flag = true;
        vector<int> ax(n);
        int mi = INT_MAX;
        for(int i=0; i<n; i++)
        {
            ax[i] = a[i];
            mi = min(mi, ax[i]);
        }
        sort(ax.begin(), ax.end());
        for(int i=0; i<n; i++)
        {
            if(a[i] != ax[i] && ax[i] % mi != 0)
            {
                flag = false;
                break;
            }

        }
    }
    if(!flag)   cout<<"NO"<<endl;
    else        cout<<"YES"<<endl;
    }
    return 0;
}