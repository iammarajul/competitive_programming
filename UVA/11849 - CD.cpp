#include<bits/stdc++.h>
using namespace std;
bool arr[10000008];

int main()
{
    while(1)
    {
        int a,b;
        cin>>a>>b;


        memset(arr,0,10000008*sizeof(bool));

        if(a==0 && b==0) break;

        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            arr[x]=1;
        }
        int cnt=0;
        for(int i=0;i<b;i++)
        {
            int y;
            cin>>y;
            if(arr[y]==1) cnt++;
        }
        cout<<cnt<<endl;
    }
}
