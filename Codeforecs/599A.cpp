#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[10];
    arr[0]=a+b+b+a;
    arr[1]=a+b+c;
    arr[2]=a+a+c+c;
    arr[3]=c+c+b+b;

    sort(arr,arr+4);
    cout<<arr[0]<<endl;

}
