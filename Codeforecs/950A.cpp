#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a;
    int rema;
    cin>>l>>r>>a;
    if(l>r) swap(l,r);
    if(a==0) cout<<2*l;
    else
    {
        rema=a;
        int k=r-l;
        if(k>=rema)
        {
            l=l+(a);
            cout<<2*l<<endl;
        }
        else
        {
            cout<<2*(r+((a-k)/2))<<endl;
        }

    }
}
