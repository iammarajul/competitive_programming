#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int four=0,seven=0,pos4,pos7;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4')
        {
            four++;
            if(four==1) pos4=i;
        }
        else if(s[i]=='7')
        {
            seven++;
            if(seven==1) pos7=i;
        }

    }
    if(four==0 && seven==0) cout<<"-1"<<endl;
    else
    {
        if(four!=seven)
        {
            if(four>seven) cout<<4;
            else cout<<7;
        }
        else
        {
            cout<<4;

        }
    }

}
