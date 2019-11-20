#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    string s[n];
    for(int i=0; i<n; i++) cin>>s[i];
    int sum=0;
    int ans=0;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(s[i][j]=='.') ans++;

    if(k==1) cout<<ans<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            int cnt=0;
            for(int j=0; j<m; j++)
            {
                if(s[i][j]=='.') cnt++;
                if(s[i][j]=='*' || j==m-1)
                {
                    if(cnt>=k) sum+=cnt-k+1;
                    cnt=0;
                }
            }
        }

        for(int i=0; i<m; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(s[j][i]=='.') cnt++;
                if(s[j][i]=='*' || j==n-1)
                {
                    if(cnt>=k) sum+=cnt-k+1;
                    cnt=0;
                }
            }
        }


        cout<<sum<<endl;
    }
}
