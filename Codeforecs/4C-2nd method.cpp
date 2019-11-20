#include<bits/stdc++.h>
using namespace std;

char s[100006][33];

int main()
{
    int n;

    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i-1;j>=0;j--)
        {
            if(strcmp(s[i],s[j])==0) cnt++;
        }
        if(cnt==0) cout<<"OK"<<endl;
        else cout<<s[i]<<cnt<<endl;
    }
}
