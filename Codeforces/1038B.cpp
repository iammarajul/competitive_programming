#include<bits/stdc++.h>
using namespace std;
int arr[45005];
int main()
{
    int n;
    cin>>n;
    int sum=(n*(n+1))/2;
    int ans=0;
    for(int i=2; i<=n; i++)
    {
        int l=sum-i;
        if(l%i==0)
        {
            ans=i;
            break;
        }
    }
    if(ans==0)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
        cout<<1<<" "<<ans<<endl;
        cout<<n-1<<" ";
        for(int i=1; i<=n; i++)
        {
            if(i!=ans) cout<<i<<" ";
        }
        cout<<endl;
    }
}
