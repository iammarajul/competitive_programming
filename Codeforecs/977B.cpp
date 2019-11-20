#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int l=s.size();
    int cc=0;
    int in=0;
    for(int i=0; i<l-1; i++)
    {
        int cnt=0;
        char s1=s[i];
        char s2=s[i+1];
        for(int j=i+1; j<l-1; j++)
        {
            if(s[j]==s1 && s[j+1]==s2)
                cnt++;
        }
        if(cc<cnt)
        {
            cc=cnt;
            in=i;
            cc=cnt;
        }

    }
    cout<<s[in]<<s[in+1]<<endl;


}
