#include<bits/stdc++.h>
using namespace std;
int arr[102];
int main()
{
    int n;
    cin>>n;
    int vv=n;
    while(n--)
    {
        int x;
        cin>>x;
        int pk[100];
        for(int i=0;i<=100;i++) pk[i]=0;
        for(int i=0;i<x;i++)
        {
            int kk;
            cin>>kk;
            if(pk[kk]==0){
            arr[kk]++;
            pk[kk]=1;
            }
        }
    }

    for(int i=1;i<=100;i++)
    {
        if(arr[i]==vv)
        cout<<i<<" ";
    }
}
