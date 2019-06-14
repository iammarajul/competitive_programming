#include<bits/stdc++.h>
using namespace std;
int arr[200];
int main()
{

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        arr[(int)s[i]]++;
    }
    int mi=10000000000;
    for(int i=65;i<65+k;i++)
    {
        if(arr[i]<mi)
            mi=arr[i];
    }
    cout<<mi*k<<endl;
}
