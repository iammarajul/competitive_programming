#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,b,q;
    cin>>n>>h>>a>>b>>q;

    while(q--)
    {
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        if(a1==a2)
        {
            cout<<abs(b1-b2)<<endl;
        }
        else
        {
            if(b1>=a && b1<=b) cout<<abs(a1-a2)+abs(b1-b2)<<endl;
            else if(b1<a) cout<<abs(b1-a)+abs(a1-a2)+abs(a-b2)<<endl;
            else if(b1>b) cout<<abs(b1-b)+abs(a1-a2)+abs(b-b2)<<endl;
        }
    }

}
