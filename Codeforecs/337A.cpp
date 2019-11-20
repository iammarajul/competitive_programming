#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,x;
    cin>>k>>x;
    int arr[x+1];
    for(int i=0;i<x;i++) cin>>arr[i];
    sort(arr,arr+x);
    int mini=99999999999;
    for(int i=0;i<=x-k;i++)
    {
        int dis=arr[i+k-1]-arr[i];
        if(dis<mini) mini=dis;
    }
    cout<<mini<<endl;
}
