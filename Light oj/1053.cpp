#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int t=1; t<=n; t++)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        cout<<"Case "<<t<<": ";
        if((arr[2]*arr[2])==(arr[0]*arr[0])+(arr[1]*arr[1])) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
