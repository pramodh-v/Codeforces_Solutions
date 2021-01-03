#include<bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d;
        int odd = 0,eve = 0;
        cin>>a>>b>>c>>d;
        int e = a,f = b,g = c,h = d;
        int m1 = min(a,min(b,c));
        int eve1=0,odd1=0,eve2=0,odd2=0;
        // e-=2;
        // if(e%2)
        //     odd1++;
        // else
        //     eve1++;
        // f-=2;
        // if(f%2)
        //     odd1++;
        // else
        //     eve1++;
        // g-=2;
        // if(g%2)
        //     odd1++;
        // else
        //     eve1++;
        // h+=2;
        // if(h%2)
        //     odd1++;
        // else
        //     eve1++;
        if(a%2)
            odd2++;
        else
            eve2++;
        if(b%2)
            odd2++;
        else
            eve2++;
        if(c%2)
            odd2++;
        else
            eve2++;
        if(d%2)
            odd2++;
        else
            eve2++;
        if(odd2==1||eve2==4)
            cout<<"Yes"<<endl;
        else
        {
            if(m1>=1)
            {   
                int eve1=0,odd1=0;
                a-=1;
                b-=1;
                c-=1;
                d-=1;
                if(a%2)
                    odd1++;
                else
                    eve1++;
                if(b%2)
                    odd1++;
        else
            eve1++;
        if(c%2)
            odd1++;
        else
            eve1++;
        if(d%2)
            odd1++;
        else
            eve1++;
        if(odd1==1||eve1==4)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}