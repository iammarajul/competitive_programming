#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];

    for(int i=1;i<=n;i++)
    {
        int arr2[1004];
        for(int j=0;j<1004;j++) arr2[j]=0;

        arr2[i]=arr2[i]+1;
        int cnt=i;
        while(1)
        {
            arr2[arr[cnt]]+=1;
            if(arr2[arr[cnt]]==2)
            {
                cout<<arr[cnt]<<" ";
                break;
            }
            cnt=arr[cnt];
        }

    }
}
