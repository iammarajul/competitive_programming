#include<bits/stdc++.h>
using namespace std;
int arr[10001];
int main()
{
    int n;
    int x=1,y=2,z;
    arr[1]=1,arr[2]=1;

    for(int i=0;1;i++)
    {
        z=x+y;
        if(z>=1000) break;
        arr[z]=1;
        x=y;
        y=z;
    }

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1) cout<<"O";
        else cout<<"o";
    }
}
