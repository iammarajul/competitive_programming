#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a[1006],b[1007];
    int p=0,q=0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][0]=='O' && a[i][1]=='O')
        {
            a[i][0]='+';
            a[i][1]='+';
            p=1;
            break;
        }
        if(a[i][3]=='O' && a[i][4]=='O')
        {
            a[i][3]='+';
            a[i][4]='+';
            q=1;
            break;
        }

    }
    if(p==1 || q==1) {
            cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    }
    else
        cout<<"NO"<<endl;
}
