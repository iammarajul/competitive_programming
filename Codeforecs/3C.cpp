#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[3];
    int cnt1=0,cnt2=0;
    cin>>s[0]>>s[1]>>s[2];
    for(int i=0;i<2;i++)
    {
        if(s[i]=='X') cnt1++;
        else if(s[i]=='0') cnt2++;
    }

    if(cnt2>4 || cnt1>5 || cnt2!=cnt1-1)

}
