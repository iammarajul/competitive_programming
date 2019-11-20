#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[3];
    s[0]="qwertyuiop";
    s[1]="asdfghjkl;";
    s[2]="zxcvbnm,./";

    char ch;string st;

    cin>>ch>>st;
    for(int i=0; i<st.size(); i++)
    {
        if(ch=='R')
        {
            for(int k=0;k<3;k++)
            {
            for(int j=0;j<s[k].size();j++)
            {
                if(s[k][j]==st[i])
                {
                    if(j!=0)
                        cout<<s[k][j-1];
                    else
                        cout<<s[k][j];
                }
            }

            }
        }
        else
        {
            for(int k=0;k<3;k++)
            {
            for(int j=0;j<s[k].size();j++)
            {
                if(s[k][j]==st[i])
                {
                    if(j==(s[k].size()-1))
                        cout<<s[k][j];
                    else
                        cout<<s[k][j+1];
                }
            }

            }
        }
    }
}
