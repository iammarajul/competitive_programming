#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;


    int ar1[n+1],ar2[n+1];
    for(int k=0; k<n; k++) cin>>ar1[k]>>ar2[k];
    int insmin=ar1[0]*60+ar2[0];
    if(insmin!=0)
    {
        if(insmin>=s+1)
            {cout<<0<<" "<<0<<endl;
        return 0;}
    }

    int m1=0,p=0,ans,minute;
    for(int k=0; k<=n; k++)
    {
        minute=(ar1[k]*60)+ar2[k];
        int dis=minute-m1;
        if(dis>=(s*2+2))
        {
            ans=m1+s+1;
            cout<<ans/60<<" "<<ans%60<<endl;
            p=1;
            break;
        }
        m1=minute;
    }

    //cout<<"              "<<p<<endl;

    if(p!=1)
    {
        //cout<<ar1[n-1]<<"           "<<ar2[n-1]<<endl;
        int ans2=((ar1[n-1]*60)+ar2[n-1])+s+1;
        //cout<<ans2<<endl;
        cout<<ans2/60<<" "<<ans2%60<<endl;
    }



}
