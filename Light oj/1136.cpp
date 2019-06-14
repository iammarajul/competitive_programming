#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            if(a%3==0 || a%3==2) cout<<"Case "<<k<<": "<<1<<endl;
            else cout<<"Case "<<k<<": "<<0<<endl;
        }
        else{
        long long bx=((b/3)*2);
        if(b%3==2) bx++;
        long long ax=(a/3)*2;
        if(a%3==0) ax--;
        //cout<<bx<<" "<<ax<<endl;
        cout<<"Case "<<k<<": "<<bx-ax<<endl;}
    }
}
