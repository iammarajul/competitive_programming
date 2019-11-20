#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    //cout<<b<<" "<<d<<endl;

    int lcm=(b*d)/(__gcd(b,d));

    int up;
    up=((lcm/b)*a)-((lcm/d)*c);
    if(up<0) up=-up;
    int gc=__gcd(up,lcm);
    up=up/gc;
    lcm=lcm/gc;
    cout<<up<<"/"<<lcm<<endl;


}
