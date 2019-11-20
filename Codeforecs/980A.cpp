#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-') cnt1++;
        else cnt2++;
    }
    if(cnt2==0 || cnt1==0) cout<<"YES"<<endl;
    else
    {
        //if(cnt1<cnt2)
        if(cnt1%cnt2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
