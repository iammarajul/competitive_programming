#include<bits/stdc++.h>
using namespace std;
map<string, bool> mp1;
//map<string, bool> mp1::iterator it1;
map<string,string>mp2;
//map<string, string> mp2::iterator it2;
int main()
{
    int n;
    vector<string> s;
    cin>>n;
    while(n--)
    {
        string s1,s2;

        cin>>s1>>s2;
        int cnt=0;
        if(mp1[s1]==0)
        {
            s.push_back(s1);
        }
        mp2[s1]=s2;
        mp2[s2]=s2;
        mp1[s2]=1;


    }
    cout<<s.size()<<endl;
    for(int i=0; i<s.size(); i++)
    {
        string k=s[i];
        cout<<k<<" ";
        while(1)
        {
            if(mp2[k]==k)
            {
                cout<<k<<endl;
                break;
            }
            else
            {
                k=mp2[k];
            }
        }
    }

}
