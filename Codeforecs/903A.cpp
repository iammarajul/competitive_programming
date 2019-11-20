#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        int p=0;
        cin>>n;
        for(int i=0;i<=100;i++)
        {
            for(int j=0;j<=100;j++)
            {
                if(3*i+7*j==n)
                {
                    p=1;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==0) cout<<"NO"<<endl;

    }

}

