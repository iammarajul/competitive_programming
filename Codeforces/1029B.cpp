
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int top=-1,dis=0;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]*2<arr[i+1])
        {
            //cout<<i<<endl;
            if(i-top>dis) dis=i-top;
            top=i;
        }
    }
    //cout<<top<<endl;
    int g=n-1-top;
    if(g>dis) dis=g;
    cout<<dis<<endl;
}
