#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int mx=arr[n-1]+k;
    int mn;
    int sum=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-1])
        {
            sum+=arr[i];
            cnt++;
        }
    }
    if((arr[n-1]*n-cnt)-sum>=k) mn=arr[n-1];
    else if((arr[n-1]*n-cnt)-sum<k)
    {
        int pk;
        int l=(arr[n-1]*n-cnt)-sum;
        if(l%n==0) pk=l/n;
        else pk=l/n  +1;
        mn=arr[n-1]+pk;
    }
    cout<<mn<<" "<<mx<<endl;


}
