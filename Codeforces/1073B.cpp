#include<bits/stdc++.h>
using namespace std;
int arr2[200004];
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];

    for(int i=0;i<n;i++) scanf("%d",&arr[i]),arr2[arr[i]]=i;

    int top=0;
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        if(arr2[x]+1>=top)
        {
            printf("%d ",arr2[x]+1-top);
            top=arr2[x]+1;
            //cout<<top<<endl;
        }
        else
        {
            printf("0 ");
            //cout<<endl;
        }

    }

}
