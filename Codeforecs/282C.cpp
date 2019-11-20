#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int cnt1=0,cnt2=0;
    if(s1.size()!=s2.size()) cout<<"NO"<<endl;
    else
    {
        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='1') cnt1++;
        if(s2[i]=='1') cnt2++;
        }
        if((cnt1>0 && cnt2>0) ||(cnt1==0 && cnt2==0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }


}





