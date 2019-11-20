#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    for(int i=1;i<=n;i++) cin>>arr[i];
    if(n==2) cout<<"NO"<<endl;
    else{
    for(int i=1;i<=n;i++)
    {
        if(arr[arr[i]]!=i && arr[arr[arr[i]]]==i)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO"<<endl;
    }
}
