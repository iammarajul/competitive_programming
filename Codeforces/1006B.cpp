#include<bits/stdc++.h>
using namespace std;

int pk[2002];

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1],arr2[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }

    sort(arr2,arr2+n,greater<int>());
    int sum=0;
    for(int i=0; i<k; i++) sum+=arr2[i];
    cout<<sum<<endl;
    int cnt=0;
    int sum2=1;
    for(int i=0; i<n; i++)
    {
        int x=arr[i];
        for(int j=0; j<k; j++)
        {
            if(arr2[j]==x)
            {
                if(pk[j]==0)
                {
                    if(sum2==k)
                    {
                        cout<<n-cnt<<" ";
                        return 0;
                    }

                    cout<<i+1-cnt<<" ";
                    cnt=i+1;
                    pk[j]=1;
                    sum2++;
                }
            }
        }
    }



}
