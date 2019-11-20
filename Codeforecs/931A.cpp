#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int k=abs(a-b);
    int sum;
    if(k%2==0)
    {
        int half=k/2;
        sum=half*(half+1);

    }
    else
    {
        int half=k/2+1;
        int sum1,sum2;
        sum1=(half*(half+1))/2;
        half--;
        sum2=(half*(half+1))/2;
        sum=sum1+sum2;

    }

    cout<<sum<<endl;
}
