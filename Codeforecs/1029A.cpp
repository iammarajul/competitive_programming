#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,p;
    string s;
    cin>>n>>t>>s;
    int pk=99999;

    for(int i=1; i<s.size(); i++)
    {
        int lk=0,p=0,j;
        for(j=i; j<s.size(); j++)
        {
            if(s[lk]!=s[j])
            {
                p=1;
                break;
            }
            lk++;
        }
        if(p==0)
        {
            pk=i;
            break;
        }

    }
    //cout<<pk<<endl;
    if(pk==99999)
    {
        for(int i=0; i<t; i++) cout<<s;
    }
    else
    {
        cout<<s;
        for(int i=1; i<=t-1; i++)
        {
            for(int j=n-pk; j<s.size(); j++)
            {
                cout<<s[j];
            }
        }

    }
    cout<<endl;


}
