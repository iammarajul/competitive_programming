#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int mx[n+1],mn[n+1];
    int sum1=0,sum2=0;
    for(int i=0; i<n; i++)
    {
        cin>>mn[i]>>mx[i];
        sum1+=mn[i];
        sum2+=mx[i];
    }
    if(t>=sum1 && t<=sum2)
    {
        cout<<"YES"<<endl;
        int dis=t-sum1;
        for(int i=0; i<n; i++)
        {
            int rm2=mx[i]-mn[i];
            if(rm2<=dis)
            {
                cout<<mx[i]<<" ";
                dis=dis-rm2;
            }
            else
            {
                cout<<mn[i]+dis<<" ";
                dis=0;
            }
        }

    }
    else
    {
        cout<<"NO"<<endl;
    }
}
