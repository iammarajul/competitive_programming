#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int p=i^j;
            if(p>=j && p<=n && i+j>p ) {cnt++; }
        }
    }

    cout<<cnt<<endl;
}
