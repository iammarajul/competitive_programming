#include<bits/stdc++.h>
using namespace std;

map< string, int > mp;
map< string ,int >::iterator it;

int main()
{
    int n;
    cin>>n;
    string p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        if(mp[p]==0) cout<<"OK"<<endl;
        else  cout<<p<<mp[p]<<endl;
        mp[p]++;
    }
}
