#include<bits/stdc++.h>
using namespace std;
bool tru[1000];
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k) break;
        cnt++;
        tru[i]=1;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>k || tru[i]==1) break;
        cnt++;
    }
    cout<<cnt<<endl;
}
