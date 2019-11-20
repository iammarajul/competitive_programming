#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;
    int arr[n+1];
    long long arr2[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }

    for(int i=1;i<n;i++) arr2[i]+=arr2[i-1];

    long long sum=arr2[k-1];
    for(int i=k,j=0;i<n;i++,j++)
    {
        sum+=(arr2[i]-arr2[j]);
    }

    //cout<<sum<<endl;
    double ans=(double) sum/(double)(n-k+1);

    std::cout<< std::fixed;
    std::cout<< std::setprecision(7);
    cout<<ans<<endl;


}
