#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n+1];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int temp=arr[0];
    if((arr[0]*a)/sum>=b) cout<<0<<endl;
    else{
        sort(arr+1,arr+n);
        //for(int j=0;j<n;j++) cout<<arr[j]<<" ";
        int sum2=0;
        for(int i=n-1;i>=1;i--)
        {
            sum2+=arr[i];
            if((temp*a)/(sum-sum2)>=b)
            {
                cout<<n-i<<endl;
                return 0;
            }
        }
    }
}
