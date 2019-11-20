#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[55][55];
    int sum=n*m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    for(int i=0;i<n;i++)
    {
        int cnt1=0,cnt2=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
                cnt1++;
            else
                cnt2++;
        }
        //cout<<cnt1<<" "<<cnt2<<endl;
        if(cnt1) cnt1--;
        if(cnt2) cnt2--;
        sum=sum+cnt1+cnt2;

    }




    cout<<sum<<endl;









}
