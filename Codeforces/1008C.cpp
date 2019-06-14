#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>::iterator it;
int main()
{
    int x;
    cin>>x;

    for(int i=0;i<x;i++)
    {
        int p;
        cin>>p;
        mp[p]++;

    }
    int mi=0;
    for(it=mp.begin();it!=mp.end();++it)
    {
        mi=max(mi,it->second);
    }
    //if(mi==999999999) mi=0;
    //if(mi==x) cout<<0<<endl;
    //else
    cout<<x-mi<<endl;
}
