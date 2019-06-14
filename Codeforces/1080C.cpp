#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int q;
    //cin>>q;

    int n,m;
    cin>>n>>m;

    int a1,a2,b1,b2,c1,c2,d1,d2;
    cin>>a1>>b1>>a2>>b2>>c1>>d1>>c2>>d2;


    long long wh=(n*m)/2,bl=(n*m)/2;
    if((n*m)%2!=0) wh++;
    long long wh1,bl1;

    long long sq1x=a2-a1+1,sq1y=b2-b1+1;
    long long ar1=sq1x*sq1y;
    if((a1+b1)%2==0)
    {

        wh1=ar1/2;
        bl1=ar1/2;
        if(ar1%2!=0) wh1++;

    }
    else{
        wh1=ar1/2;
        bl1=ar1/2;
        if(ar1%2!=0) bl1++;
    }

    //cout<<wh1<<" "<<bl1<<endl;

    wh=wh+bl1;
    bl=bl-bl1;


    long long wh2,bl2;

    long long sq2x=c2-c1+1,sq2y=d2-d1+1;
    long long ar2=sq2x*sq2y;
    if((c1+d1)%2==0)
    {

        wh2=ar2/2;
        bl2=ar2/2;
        if(ar2%2!=0) wh2++;

    }
    else{
        wh2=ar2/2;
        bl2=ar2/2;
        if(ar2%2!=0) bl2++;
    }
    //cout<<wh2<<" "<<bl2<<endl;
    wh=wh-wh2;
    bl=bl+wh2;


   



}
