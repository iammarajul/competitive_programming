#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int l,v,s,f;
        cin>>l>>v>>s>>f;
        int md=l/v;
        int ds=s/v;
        if(s%v==0) ds--;
        int df=f/v;

        cout<<md-(df-ds)<<endl;
    }
}
