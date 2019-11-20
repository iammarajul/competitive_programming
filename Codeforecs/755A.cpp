#include<bits/stdc++.h>
using namespace std;

int prime[1000009];

void sheive()
{
    prime[1]=1;
    int s=sqrt(1000000);
    for(int i=4; i<=1000000; i+=2) prime[i]=1;
    for ( int i = 3; i <= s; i += 2 )
    {
        if ( prime[i] == 0 )
        {
            for ( int j = i ; i*j <= 1000000; j += 2  )  prime[i*j] = 1;
        }
    }
}

int main()
{
    sheive();
    int x;
    cin>>x;
    if(x==1) cout<<8<<endl;
    else if(x%2==0)
    {
        for(int i=1;1;i++) {
            if(prime[(i*x)+1]==1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    else
        cout<<1<<endl;
}

