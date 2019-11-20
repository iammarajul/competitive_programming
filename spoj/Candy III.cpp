#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,sum,t;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            sum+=x;
        }
        //cout<<"cgsc"<<sum<<endl;
        if(sum%n==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
