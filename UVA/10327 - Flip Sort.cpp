#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int arr[x+1];
        for(int i=0; i<x; i++) cin>>arr[i];
        int cnt=0;
        for(int i=0; i<x; i++)
        {
            for(int j=i+1; j<x; j++)
            {
                if(arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                    cnt++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<cnt<<endl;
    }
}
