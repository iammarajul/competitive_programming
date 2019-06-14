#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,a2,b2,a3,b3,p,q;
    cin>>x>>y>>a2>>b2>>a3>>b3;
    if(a2<x && b2<y) p=1;
    else if(a2>x && b2>y) p=2;
    else if(a2>x && b2>y) p=4;
    else if(a2>x && b2<y) p=3;

    if(a3<x && b3<y) q=1;
    else if(a3>x && b3>y) q=2;
    else if(a3>x && b3>y) q=4;
    else if(a3>x && b3<y) q=3;

    if(p==q) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
