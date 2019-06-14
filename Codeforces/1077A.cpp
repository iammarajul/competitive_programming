#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        long long sum1,sum2;
        long long l1,l2;
        if(k%2==0)
        {
            l1=k/2;
            l2=k/2;
        }
        else
        {
            l1=(k/2)+1;
            l2=k/2;

        }
        //cout<<l1<<" "<<l2<<endl;
        sum1=a*(l1);
        sum2=b*(l2);
        cout<<sum1-sum2<<endl;
    }
}
