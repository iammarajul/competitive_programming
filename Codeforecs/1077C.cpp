#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    int arr[n+1],arr2[n];long long sum=0;
    for(int i=0;i<n;i++) {cin>>arr[i];sum+=arr[i];arr2[i]=arr[i];}
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++)
    {
        long long k=sum-arr[i];
        long long l;
        if(arr[i]==arr2[n-1]) l=arr2[n-2];
        else l=arr2[n-1];
        if(k-l==l ) vc.push_back(i+1);
    }
    cout<<vc.size()<<endl;
    for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
}
