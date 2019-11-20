#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    long long sum=0,sum2=0;
    for(int i=0;i<n;i++) {cin>>arr[i];sum+=arr[i];}

    int half=ceil((double)sum/2.0);
    for(int i=0;i<n;i++)
    {
        sum2+=arr[i];
        if(sum2>=half) {cout<<i+1<<endl;break;}
    }
}
