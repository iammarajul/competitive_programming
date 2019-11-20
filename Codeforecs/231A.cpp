#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x,y,z,cnt=0;
    cin>>n;
    while(n--)
    {
       cin>>x>>y>>z;
       if(x+y+z>=2)
       {
           cnt++;
       }
    }
    cout<<cnt<<endl;

}
