#include<bits/stdc++.h>
using namespace std;
bool pk[102];
bool pk2[102];

int main()
{
    int n,m;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>m;
    int arr2[m+1];
    for(int i=0;i<m;i++) cin>>arr2[i];
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(pk[i]==0)
        {
            for(int j=0;j<m;j++)
            {
                if(pk2[j]==0) {
                    if(abs(arr[i]-arr2[j])<=1) {
                        ans++;
                        pk[i]=1;
                        pk2[j]=1;
                        break;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}
