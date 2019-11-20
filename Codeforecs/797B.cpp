#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int sumodd=0,sumeven=0,miodd2=-99999,miodd1=999999;
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0 && arr[i]%2!=0)
        {
            sumodd+=arr[i];
            miodd1=min(arr[i],miodd1);
        }
        else if(arr[i]>0 && arr[i]%2==0) sumeven+=arr[i];
        if(arr[i]<0 && arr[i]%2!=0) miodd2=max(arr[i],miodd2);
    }
    int ans=sumodd+sumeven;
   // cout<<miodd1<<" "<<miodd2<<" "<<ans<<endl;
    if(ans%2!=0) cout<<ans<<endl;
    else
    {
        if(ans-miodd1>ans+miodd2) cout<<ans-miodd1<<endl;
        else cout<<ans+miodd2<<endl;
    }


}
