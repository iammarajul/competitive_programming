#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>=65 && a[i]<=90 ) a[i]=a[i]+32;
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y' )
        {
            cout<<"."<<a[i];
        }
    }
}
