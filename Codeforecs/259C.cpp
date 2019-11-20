#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ln=s.size();

    for(int i=0,j=ln-1;i<ln;i++,j--)
    {
        sum+=s[i]-'0';
    }
}
