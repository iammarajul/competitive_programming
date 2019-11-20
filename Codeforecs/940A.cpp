#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);
    int m=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i;j<n;j++)
        {
            if(abs(arr[i]-arr[j])<=d) cnt++;
        }
        if(cnt>m){
            m=cnt;
        }

    }

    cout<<n-m<<endl;

}
