#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,x,y;

    cin>>a>>b>>x>>y;

    long long p=__gcd(x,y);
    x=x/p;
    y=y/p;

    long long ans1=a/x;
    long long ans2=b/y;
    long long ans=min(ans1,ans2);

    cout<<ans<<endl;
}
