#include<bits/stdc++.h>
using namespace std;

int mp[256];
int main()
{
    int r,c;
    char ch;
    string s[101];
    cin>>r>>c>>ch;
    for(int i=0; i<r; i++)
    {
        cin>>s[i];
    }


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(s[i][j]==ch)
            {
                char l;
                if(j!=0)
                {
                    l=s[i][j-1];
                    if(l!=ch && l!='.' && mp[(int)l]==0 ) mp[(int)l]=1;
                }
                if(j!=c-1)
                {
                    l=s[i][j+1];
                    if(l!=ch && l!='.' && mp[(int)l]==0) mp[(int)l]=1;
                }
                if(i!=0)
                {
                    l=s[i-1][j];
                    if(l!=ch && l!='.' && mp[(int)l]==0) mp[(int)l]=1;
                }
                if(i!=r-1)
                {
                    l=s[i+1][j];
                    if(l!=ch  && l!='.' && mp[(int)l]==0) mp[(int)l]=1;
                }

            }
        }
    }
//for(it=mp.begin();it!=mp.end();it++) cout<<it->first<<endl;
    int cnt=0;
    for(int i=0; i<256; i++)
        if(mp[i]==1)
            cnt++;

    cout<<cnt<<endl;


}
