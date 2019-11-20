#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    //for(int i=1;i<n;i++) arr[i]+=arr[i-1];
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<=n-i;j++)
        {
            int sum=0;
            for(int k=j;k<j+i;k++)
            {
                sum+=arr[k];
            }
            //sum=arr[j+i-1]-arr[j];
            //if(j==0) sum=arr[j+i-1];
            if(sum>i*100)
            {
                printf("%d\n",i);
                return 0;
            }
        }
    }

    printf("0\n");
}
