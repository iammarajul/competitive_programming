#include<bits/stdc++.h>
using namespace std;

//#define FR(l,n,m) for(int i=l;i<n;i+=m);

int main()
{
    string a;
    cin>>a;
    int arr[100];
    int b=0;
    for(int i=0;i<a.size();i+=2)
    {
        arr[b]=a[i]-'0';
        b++;
    }
    sort(arr,arr+b);
    for(int i=0;i<b;i++)
    {
        cout<<arr[i];
        if(i!=b-1) cout<<'+';
    }
}
