#include<bits/stdc++.h>
using namespace std;

//vector<int >vc[200004];

int main()
{
    long long n,cnt0=0,cnt1=0,ans=0,pk=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='1') cnt1++;
        else cnt0++;
    }
    for(int i=0;i<n;i++)
    {
        if(s2[i]=='0')
        {
            if(s1[i]=='1') ans+=cnt0,cnt1--;
            else ans+=cnt1,cnt0--;

        }
    }
    cout<<ans<<endl;

}
