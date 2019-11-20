#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    string a;
    cin>>n>>a;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U') y++;
        else x++;
        if((x==y) && (a[i]==a[i+1])) cnt++;
    }

    cout<<cnt<<endl;
}
