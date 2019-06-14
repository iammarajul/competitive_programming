#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {

    int a,b;
    cin>>a>>b;

    int l=abs(b-a)+a;
    printf("Case %d: ",i);
    cout<<(l*4)+19<<endl;

    }

}
