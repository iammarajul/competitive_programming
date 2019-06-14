#include<bits/stdc++.h>
using namespace std;

map<int,int >mp;
vector< int > p;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(mp[n]==0)
        {
            p.push_back(n);

        }
        mp[n]++;
    }

    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<" "<<mp[p[i]]<<endl;
    }
}
