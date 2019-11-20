#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s[n+1];
    for(int i=0; i<n; i++) cin>>s[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j]!='*')
            {
                int cnt=0;
                if(j!=0)
                {
                    if(s[i][j-1]=='*')
                        cnt++;
                }
                if(j!=m-1)
                {
                    if(s[i][j+1]=='*')
                        cnt++;
                }
                if(i!=0)
                {
                    if(s[i-1][j]=='*')
                        cnt++;

                    if(j!=0)
                    {
                        if(s[i-1][j-1]=='*')
                            cnt++;
                    }
                    if(j!=m-1)
                    {
                        if(s[i-1][j+1]=='*')
                            cnt++;
                    }
                }
                if(i!=m-1)
                {
                    if(s[i+1][j]=='*')
                        cnt++;

                    if(j!=0)
                    {
                        if(s[i+1][j-1]=='*')
                            cnt++;
                    }
                    if(j!=m-1)
                    {
                        if(s[i+1][j+1]=='*')
                            cnt++;
                    }
                }
                //cout<<cnt<<endl;
                int ans;
                if(s[i][j]=='.') ans=0;
                else ans=s[i][j]-'0';
                if(ans!=cnt){
                cout<<"NO"<<endl;
                return 0;
                }

            }

        }
    }

    cout<<"YES"<<endl;

}
