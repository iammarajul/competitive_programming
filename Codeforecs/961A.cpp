#include<bits/stdc++.h>
using namespace std;

int arr[2000];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }

    sort(arr,arr+n+1);
    //for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    cout<<arr[1]<<endl;
}
