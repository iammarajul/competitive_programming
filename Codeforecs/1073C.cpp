#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;string s
    cin>>n>>s;
    int a,b;
    cin>>a>>b;

    if(abs(a)+abs(b)>n) cout<<-1<<endl;
    else
    {
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') l++;
            else if(s[i]=='R') r++;
            else if(s[i]=='U') u++;
            else if(s[i]=='D') d++;

        }
        if(a>=0 && b>=0)
        {
            if()
        }
    }

}
