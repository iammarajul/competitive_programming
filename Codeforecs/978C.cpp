#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i) arr[i]+=arr[i-1];
    }

    int inc=0;
    for(int i=0; i<m; i++)
    {
        long long x;
        cin>>x;
        for(int j=inc; j<m; j++)
        {
            if(arr[j]>x)
            {
                inc=j;
                int ans = 0;
                if(j!=0) ans=arr[j]-arr[j-1];
                cout<<j+1<<" "<<ans<<endl;
                break;
            }
            else if(arr[i]>x)
            {

            }

        }
    }
}
