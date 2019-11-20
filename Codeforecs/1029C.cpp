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
    int ans=0;

    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i]*2)
                break;
        }
        int pk=j-i;
        if(ans<pk) ans=pk;

    }

    cout<<ans<<endl;
}
