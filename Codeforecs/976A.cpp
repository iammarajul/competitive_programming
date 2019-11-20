#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;

    cin>>t>>s;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<t;i++)
    {
        if(s[i]=='1') cnt1++;
        else cnt2++;
    }
    cout<<1;
    for(int i=0;i<cnt2;i++) cout<<0;
    cout<<endl;
}
