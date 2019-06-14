#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double x;
        cin>>x;
        double ans;
        ans= ((x*2.0)*(x*2.0))-(2.0*acos(0.0)*x*x);
        cout<<"Case "<<i<<": ";
        cout<<fixed;
        cout<<setprecision(2);
        cout<<ans<<endl;
    }
}
