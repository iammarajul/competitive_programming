#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int arr[n+1],arr2[n+1];
        for(int i=0; i<n; i++) scanf("%d",&arr[i]);
        for(int i=0; i<n; i++) scanf("%d",&arr2[i]);
        int p=0;
        for(int i=0; i<n-2; i++)
        {
            int l=arr2[i]-arr[i];
            if(l<0)
            {
                printf("NIE\n");
                p=1;
                break;
            }
            else
            {
                arr[i]=arr2[i];
                arr[i+1]+=l*2;
                arr[i+2]+=l*3;

            }
        }

        if(p==0)
        {
            if(arr[n-1]==arr2[n-1] && arr[n-2]==arr2[n-2])
            {
                printf("TAK\n");
            }
            else
                printf("NIE\n");
        }

    }
}
