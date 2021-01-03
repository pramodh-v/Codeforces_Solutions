#include <bits/stdc++.h>

using namespace std;

int n,n1;
vector<int> getMaxArea(int w, int h, vector<int> isVertical, vector<int> distance) 
{
    std::vector<int> ans;
    int i=0;
    if(isVertical[i]==true)
    {
        w = max(distance[i],w-distance[i]);
    }
    else 
    {
        h = max(distance[i],h-distance[i]);
    }
    //cout<<w<<" "<<h<<endl;
    ans.push_back(w*h);
    for(int i=1;i<n1;i++)
    {
        if(isVertical[i]==true)
        {
            int j=i;
            for(;j>=0;j--)
            {
                if(isVertical[j]==true)
                    break;
            }
            w=max(w,distance[i]-distance[j]);
        }
        else 
        {
            int j=i;
            for(;j>=0;j--)
            {
                if(isVertical[j]==false)
                    break;
            }
            h=max(h,distance[i]-distance[j]);
        }
        //cout<<w<<" "<<h<<endl;
        ans.push_back(w*h);
    }
    return ans;
}

int main()
{
    int w,h;
    vector<int> isVertical(100005);
    vector<int> distance(100005);
    cin>>w>>h;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>isVertical[i];
    cin>>n1;
    for(int i=0;i<n1;i++)
        cin>>distance[i];
    vector<int> ans = getMaxArea(w, h, isVertical, distance);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}