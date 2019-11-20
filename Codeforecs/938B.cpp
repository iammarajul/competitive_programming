#include<bits/stdc++.h>
using namespace std;

int a[1000008];

int main()
{

    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    int l,h;
    if(a[n-1]<=500000) cout<<a[n-1]-1<<endl;
    else if(a[0]>500000) cout<<1000000-a[0]<<endl;
    else
    {
        int i;
        for(i=0;a[i]<=500000;i++)
        {

        }
        l=a[i-1]-1;
        for(i=n-1;a[i]>500000;i--)
        {

        }
        h=1000000-a[i+1];
        if(h>=l)cout<<h<<endl;
        else cout<<l<<endl;
    }



}
