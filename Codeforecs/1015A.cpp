#include<bits/stdc++.h>
using namespace std;
int arr[400];
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++) arr[j]=1;
    }
    int cnt=0;
    for(int i=1;i<=b;i++)
    {
        if(arr[i]==0) cnt++;
    }
    cout<<cnt<<endl;
    for(int i=1;i<=b;i++)
    {
        if(arr[i]==0) cout<<i<<" ";
    }
    cout<<endl;
}

