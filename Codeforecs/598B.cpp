#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--)
    {
        int l,m,k;
        cin>>l>>m>>k;
        l--;m--;
        int dis=m-l+1;
        int jj=k%(m-l+1);char arr[jj+1];
        int cnt=0;
        for(int i=l+(dis-jj);i<=m;i++)
        {
            arr[cnt]=s[i];
            cnt++;
        }
        for(int i=l+(dis-jj)-1;i>=l;i--)
        {
            s[i+jj]=s[i];
        }
        int in=l;
        for(int i=0;i<cnt;i++)
        {
            s[in]=arr[i];
            in++;

        }






    }
    cout<<s<<endl;
}
