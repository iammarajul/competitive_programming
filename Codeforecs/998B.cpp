#include<bits/stdc++.h>
using namespace std;
int m[200];
int main()
{
    int n,b;
    cin>>n>>b;
    int arr[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=2;i<n;i+=2)
    {
        int ev=0,od=0;
        for(int j=i;j>=0;j--)
        {
            if(arr[i]%2==0) ev++;
            else od++;
        }
        if(ev==od)
        {
            m[cnt]=abs(arr[i]-arr[i+1]);
            cnt++;
        }
    }
    sort(m,m+cnt);
}
