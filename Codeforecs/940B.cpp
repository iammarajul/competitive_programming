#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    if(k>n || n/k<1 || k==1)
    {
        cout<<(n-1)*a<<endl;
    }
    else
    {
        ll x=n,ne,p,sum=0;
        while(x!=1)
        {
            //if(x==1) break;
            ll mod=x%k;
            p=x;
            if(mod==0)
            {
                x=x/k;
                //cout<<x<<"...2 op"<<endl;
                if(b>(p-x)*a) sum+=(p-x)*a;
                else sum+=b;
            }
            else
            {
                x=x-mod;

                sum+=(mod*a);
                if(x==0) {x=1;sum-=a;}
                //cout<<x<<".....1 op"<<sum<<endl;
            }

        }

        cout<<sum<<endl;
    }
}
