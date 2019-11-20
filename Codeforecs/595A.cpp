#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=(n*(n+1))/2;
       // cout<<sum<<endl;
        long long sum2=0;
        for(int i=0;; i++)
        {
            long long po;
            po=powl(2,i);
            if(po>n)
                break;
            sum2+=po;
        }
        //cout<<sum2<<endl;
        sum=sum-sum2;
        long long result=(sum-sum2);
        cout<<result<<endl;
    }
}
