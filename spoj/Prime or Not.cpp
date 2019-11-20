#include<bits/stdc++.h>
using namespace std;

bool prime(long long x)
{
    long long s=sqrt(x);
    for(int i=2;i<=s;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n,c=1;
    long long x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x==1) cout<<"Case "<<c<<":"<<"NO"<<endl;
        else if(prime(x)==true) cout<<"Case "<<c<<":"<<"YES"<<endl;
        else cout<<"Case "<<c<<":"<<"NO"<<endl;

    }
}
