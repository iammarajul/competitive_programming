#include<bits/stdc++.h>
using namespace std;
long long arr2[1000005];
int main()
{
    int test;
    cin>>test;
    while(test--){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
        if(i!=0) arr2[i]+=arr2[i-1];
    }
    long long sum=0,ans=0;
    for(int i=0;i<n;)
    {
        sum+=arr2[i];
        ans++;
        if(sum>=n-1) break;
        i+=arr2[i];
    }
    cout<<ans<<endl;
    }


}
