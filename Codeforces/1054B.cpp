#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int mx=0,mi;
    for(int i=0;i<n;i++)
    {
        if(arr[0]!=0)
        {
            cout<<1<<endl;
            return 0;
        }

        if(arr[i]-1>mx)
        {
            cout<<i+1<<endl;
            return 0;
        }
        mx=max(mx,arr[i]);

    }
    cout<<-1<<endl;
}
