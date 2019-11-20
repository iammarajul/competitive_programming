#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long x;
        cin>>x;
        if(x==0) cout<<1<<endl;
        else if(x==1)cout<<2<<endl;
        else if(x%2!=0)
        {
            if((x==3) ||(x%4==3)) cout<<x+1<<endl;
            else if(x%4==1) cout<<4<<endl;
        }
        else
        {
            int ans=0;
            int sq=sqrt(x);
            for(int i=0;i<=sq;i++)
            {
                if((x-(x^i))==i) ans+=2;
            }
            cout<<ans<<endl;
        }
    }
}
