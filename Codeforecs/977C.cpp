#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);

    int m=arr[k-1];

    if(n==k) cout<<arr[n-1]<<endl;
    else if(k==0)
    {
        if(arr[0]==1)  cout<<-1<<endl;
        else cout<<arr[0]-1<<endl;
    }
    else
    {

        if(arr[k-1]!=arr[k])
            cout<<arr[k-1]<<endl;
        else
            cout<<-1<<endl;
    }
}
