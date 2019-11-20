#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,n1,n2;
    cin>>n>>n1>>n2;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n1>n2) swap(n1,n2);
    sort(arr,arr+n,greater<int>());
    double sum1=0,sum2=0,men1,men2;
    for(int i=0;i<n1;i++)
    {
        sum1+=(double) arr[i];
    }
    men1=sum1/(double) n1;
    for(int i=n1;i<n1+n2;i++)
    {
        sum2+=(double) arr[i];
    }
    men2=sum2/(double) n2;

    printf("%.8lf\n",men1+men2);

}
