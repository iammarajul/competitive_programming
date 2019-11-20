#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,ans,k=1;
    while(1)
    {
        sum=(powl(2,k)-1)*powl(2,k-1);
        if(sum>n) break;
        if(n%sum==0) ans=sum;
        k++;
    }
    cout<<ans<<endl;
}
