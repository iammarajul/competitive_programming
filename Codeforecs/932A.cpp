#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    char arr[10002];
    int s;
    s=a.size();
    int cnt=0;

    for(int i=0; i<s/2; i++)
    {
        if(a[i]!=a[s-i-1])
        {
            arr[cnt]=a[i];
            arr[cnt+1]=a[s-i-1];
            cnt=cnt+2;
        }
        else
        {
            arr[cnt]=a[i];
            cnt++;
        }
    }

    if(s%2==0)
    {
        for(int i=0; i<cnt; i++) cout<<arr[i];
        for(int i=cnt-1; i>=0; i--) cout<<arr[i];
        cout<<endl;
    }
    else
    {
        for(int i=0; i<cnt; i++) cout<<arr[i];
        cout<<a[s/2];
        for(int i=cnt-1; i>=0; i--) cout<<arr[i];
        cout<<endl;
    }

}
