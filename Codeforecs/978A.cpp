#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {

        if(s[i]=='x')
        {
            int cnt=0;
            int j;
            for(j=i;1;j++)
            {
                if(s[j]!='x') break;
                cnt++;
            }

            if(cnt>=3) cnt-=2;
            else cnt=0;
            sum+=cnt;
            i=j-1;
        }
    }
    cout<<sum<<endl;
}
