#include<bits/stdc++.h>
using namespace std;

map<string ,int > mp;

int cnt=0;
void one()
{
    string a;

    for(int i=97;i<=122;i++)
    {
        a[0]=(char) i;
        mp[a]=++cnt;

    }
}

int main()
{
    one();
    cout<<mp["z"];
}
