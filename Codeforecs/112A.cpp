#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[3];
    cin>>a[0]>>a[1];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<a[i].size(); j++)
            if(a[i][j]>='A' && a[i][j]<='Z')
                a[i][j]+=32;
    }
    cout<<a[0].compare(a[1]);
}
