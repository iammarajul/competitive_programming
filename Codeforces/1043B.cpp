#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++) cin>>arr[i];
    vector<int>vc;
    for(int k=1;k<=n;k++)
    {
        int p=0;
        int pk[1001];
        for(int j=0;j<=k;j++) pk[j]=-10000000;
        for(int i=1;i<=n;i++)
        {
            int x=arr[i]-arr[i-1];
            int in=(i-1)%k;
            if(pk[in]==-10000000) pk[in]=x;
            else{
                if(pk[in]!=x){
                    p=1;break;
                }
            }
        }
        if(p==0) vc.push_back(k);

    }

    cout<<vc.size()<<endl;
    for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";


}
