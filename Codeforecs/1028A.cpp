#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int col,row;
    for(int i=0; i<n; i++)
    {
        int p=0;
        for(int j=0; j<s[i].size(); j++)
        {
            if(s[i][j]=='B')
            {
                col=i;
                row=j;
                p=1;
                break;
            }
        }
        if(p==1) break;
    }
    int an=0,bn=0;

    for(int i=0; i<m; i++)
    {
        if(s[col][i]=='B') an++;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i][row]=='B') bn++;
    }

    if(an==1 && bn==1)
    {
        cout<<++col<<" "<<++row<<endl;
        return 0;
    }
    else
    {
        //cout<<an<<bn<<endl;
        //cout<<col<<" "<<row;
        cout<<col+1+(an/2)<<" "<<row+1+(bn/2)<<endl;

    }



    //cout<<


}
