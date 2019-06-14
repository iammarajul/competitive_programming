#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt1=0,cnt2=0,dis=0;
    for(int i=0;i<n;i++)
    {
        if(i!=0 && i!=n-1)
        {
           if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)
           {
                cnt1++;
               if(arr[i+1]==1) cnt2++,arr[i+1]=0;
           }

        }
    }
    if(cnt1==0) cout<<0;
    else
    cout<<cnt2;

}
