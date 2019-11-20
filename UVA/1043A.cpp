#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx=0;
    long long sum=0;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
        sum+=arr[i];
    }

    for(long long i=mx;1;i++)
    {
        long m=n*i;
        if((m-sum)>sum){
            cout<<i<<endl;
        break;
        }
    }



}
