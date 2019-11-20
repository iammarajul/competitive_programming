
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long mi=m*2;
    if(mi>n) mi=n;
    mi=n-mi;
    long long k=2;
    for(;k<=n;k++)
    {
        if(((k*(k-1))/2)>=m) break;
    }
    //k--;
    //cout<<k<<endl;

    if(m==0) k=0;
    cout<<mi<<" "<<n-k<<endl;

}
