#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int kt=1;kt<=test;kt++)
    {
        string s;
        cin>>s;
        //if(s.compare("0")==0) break;
        string k;
        for(int i=(s.size()-1); i>=0; i--)
        {
            k.push_back(s[i]);
        }
        //cout<<k<<endl;
        cout<<"Case "<<kt<<": ";
        if(k.compare(s)==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
