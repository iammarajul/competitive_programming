#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        long long a,b;
        cin>>a>>b;

        long long x=(a*(a+1))/2;
        x=x-a;
        long long y=(b*(b+1))/2;

        long long sum=y-x;


        long long p=(a/2)*(a/2);

        long long q=b/2;
        if(b%2!=0) q++;
        q=q*q;
        long long sum2=q-p;

        //cout<<sum<<" "<<sum2<<endl;

        long long ans2=sum-sum2;

        cout<<ans2-sum2<<endl;



    }


}

