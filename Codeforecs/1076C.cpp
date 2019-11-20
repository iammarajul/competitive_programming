#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    double d;
    cin>>d;
    if(d==1. || d==2. || d==3.) cout<<"N"<<endl;
    else if(d==0.) cout<<"Y"<<" "<<0.0000000<<" "<<0.00000000<<endl;
    else
    {
        double hi=d/2.;
        double lo=0.;

        while(lo<hi)
        {
            double mid=(hi+lo)/2.;
            if((long long)((mid*(d-mid))*1000000000.)==(long long)(d*1000000000.))
            {
                cout<<"Y"<<" ";
                cout<<fixed;
                std::cout << std::setprecision(9) ;
                cout<<mid<<" "<<d-mid<<endl;
                break;
            }
            else if(mid*(d-mid)>d) hi=mid;
            else if(mid*(d-mid)<d) lo=mid;
        }
    }
    }

}
