#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr,arr+3);
    int x=arr[0]+arr[1];
    if(x>arr[2]) cout<<0<<endl;
    else if(x<=arr[2]) cout<<arr[2]-x+1<<endl;
}
