#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int m;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(i==0) m=a+b+c+d;
        arr[i]=a+b+c+d;
    }

    sort(arr,arr+n,greater<int>());

    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            cout<<i+1<<endl;
            break;
        }
    }

}
