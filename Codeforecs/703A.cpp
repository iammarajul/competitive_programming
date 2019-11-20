#include<bits/stdc++.h>
using namespace std;



int main()
{
    int x,cnt1=0,cnt2=0;
    cin>>x;
    while(x--)

    {
        int a,b;
        cin>>a>>b;
        if(a>b) cnt1++;
        else if(b>a) cnt2++;
    }

    if(cnt1==cnt2) cout<<"Friendship is magic!^^"<<endl;
    else if (cnt1> cnt2) cout<<"Mishka"<<endl;
    else cout<<"Chris"<<endl;

}
