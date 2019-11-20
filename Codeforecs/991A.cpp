#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;

    int s=(a+b)-c;
    if(s<0) cout<<-1<<endl;
    else
    {
        int p=n-s;
        if(p<1) cout<<-1<<endl;
        else cout<<p<<endl;
    }
}
