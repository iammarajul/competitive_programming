#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,k;
    cin>>n>>k;
    double tempa,tempb,sum=0;
    for(int i=0; i<n; i++)
    {
        double a,b;
        cin>>a>>b;

        if(i!=0)
        {
            double x=sqrt((a-tempa)*(a-tempa)+(b-tempb)*(b-tempb));
            sum+=x;
        }
        tempa=a;
        tempb=b;
    }
    double ans;
    ans=k*sum;
    cout<<fixed;
    cout<<setprecision(9);
    cout<<ans/50.0<<endl;


}
