#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,k;
    cin>>w>>h>>k;
    int ans=0;

    for(int i=1;i<=k;i++)
    {
        int t=w*2;
        int t2=(h-2)*2;
        ans+=t+t2;
        w=w-4;h=h-4;
    }
    cout<<ans<<endl;

    }
