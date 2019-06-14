#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long n;
        cin>>n;
        long long x=ceil(sqrt(n));

        // cout<<x;
        long long p=((x-1)*(x-1))+x;

        long long anx,any;
        if(n==p) anx=x,any=x;
        else if(x%2!=0)
        {
            if(n<p) any=x-(p-n),anx=x;
            else anx=x-(n-p),any=x;
        }
        else
        {
            if(n>p) any=x-(n-p),anx=x;
            else anx=x-(p-n),any=x;

        }
        printf("Case %d: ",i);
        cout<<anx<<" "<<any<<endl;

    }



}
