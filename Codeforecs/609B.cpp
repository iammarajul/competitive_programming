#include<bits/stdc++.h>
using namespace std;

int arr[11];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }
    long long sum=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            sum=sum+(arr[i]*arr[j]);
        }
    }
    cout<<sum<<endl;

}
