#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        if(m>(n*2+2)) cout<<-1<<endl;
        else
        {
            int dis=m-(n+1);
            //cout<<dis<<endl;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(cnt<dis) cnt++,cout<<1;
                cout<<1<<0;
            }
            if(cnt<dis) cout<<11; else cout<<1;

        }
    }
    else if(n>m)
    {
        if(n-m==1)
        {
            for(int i=0;i<m;i++) cout<<0<<1;
            cout<<0;
        }
        else cout<<-1<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
            cout<<10;

    }
}
