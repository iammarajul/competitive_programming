#include<bits/stdc++.h>
using namespace std;
struct
{
    int a,b;
} arr[101];

int main()
{
    int n,w;
    cin>>n>>w;
    int sum=0;
    int pk[101];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr[i].a=x;
        sum+=ceil((double)x/2.0);
        arr[i].b=i;

        pk[i]=x;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i].a<arr[j].a)
            {
                swap(arr[i].a,arr[j].a);
                swap(arr[i].b,arr[j].b);
            }
        }
    }

    if(sum>w) cout<<-1<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            arr[i].a=ceil((double)arr[i].a/2.0);
        }
        int we=w-sum;

        for(int i=0; i<n; i++)
        {
            if( we!=0)
            {
                int dis=pk[arr[i].b]-arr[i].a;
                if(dis>=we)
                {
                    arr[i].a+=we;
                    we=0;
                }
                else
                {
                    arr[i].a=pk[arr[i].b];
                    we-=dis;
                }
            }
        }
        if(we!=0) cout<<-1<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i].b>arr[j].b)
                    {
                        swap(arr[i].a,arr[j].a);
                        swap(arr[i].b,arr[j].b);
                    }
                }
            }

            for(int i=0;i<n;i++)
            {
                cout<<arr[i].a<<" ";
            }
        }


    }






}
