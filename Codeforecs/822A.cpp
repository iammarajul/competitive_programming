#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long x,y,mini,sum=1;
    cin>>x>>y;
    if(x>=y) mini=y;
    else mini=x;
    for(int i=1;i<=mini;i++) sum*=i;

    cout<<sum<<endl;


}
