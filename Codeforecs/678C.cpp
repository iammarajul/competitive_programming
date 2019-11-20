#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    long long na=n/a;
    long long nb=n/b;
    long long bt=n/((a*b)/__gcd(a,b));
    long long int ans;

    //cout<<na<<" "<<nb<<" "<<bt<<endl;
    if(p>=q)
        ans=na*p+q*(nb-bt);
    else
        ans=(na-bt)*p+nb*q;


    if(ans<0) ans=1000000000000000000;
    cout<<ans<<endl;
}
