#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,b1,c1,d1;
    int a2,b2,c2,d2;
    int a3,b3,c3,d3;
    int a4,b4,c4,d4;
    cin>>a1>>b1>>c1>>d1;
    cin>>a2>>b2>>c2>>d2;
    cin>>a3>>b3>>c3>>d3;
    cin>>a4>>b4>>c4>>d4;
    bool p=false;

    if     (a1==1 && (d1==1 || d4==1)) {p=true;}
    else if(b1==1 && (d1==1 || d3==1)) {p=true; }
    else if(c1==1 && (d1==1 || d2==1)) {p=true;}

    else if(a2==1 && (d2==1 || d1==1)) {p=true; }
    else if(b2==1 && (d2==1 || d4==1)) {p=true;}
    else if(c2==1 && (d2==1 || d3==1)) {p=true;}

    else if(a3==1 && (d3==1 || d2==1)) {p=true; }
    else if(b3==1 && (d3==1 || d1==1)) {p=true;}
    else if(c3==1 && (d3==1 || d4==1)) {p=true; }

    else if(a4==1 && (d4==1 || d3==1)) {p=true; }
    else if(b4==1 && (d4==1 || d2==1)) {p=true; }
    else if(c4==1 && (d4==1 || d1==1)) {p=true; }

    else
    {
        p=false;
        cout<<"NO"<<endl;
    }

    if(p==true) cout<<"YES"<<endl;


}
