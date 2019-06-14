#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n1,n2,cnt=0,nn;
    n1=s1.size();n2=s2.size();
    if(n1>n2) nn=n2;
    else nn=n1;
    for(int i=n1-1,j=n2-1,k=0;k<nn;i--,j--,k++)
    {
        if(s1[i]==s2[j]) cnt++;
        else break;
    }
    //cout<<cnt<<endl;
    cout<<(n1+n2)-cnt*2<<endl;
}
