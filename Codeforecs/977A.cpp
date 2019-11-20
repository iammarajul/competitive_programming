#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,k;
    cin>>x>>k;
    int sum=x;
    for(int i=1;i<=k;i++)
    {
        if(sum%10==0)
            sum=sum/10;
        else
            sum--;
    }
    cout<<sum<<endl;
}
