#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<s[i];
            if(i%2!=0 && i!=n-1) cout<<"-";
        }

    }
    else
    {
        for(int i=0;i<n-3;i++)
        {
            cout<<s[i];
            if(i%2!=0) cout<<"-";
        }
        cout<<s[n-3]<<s[n-2]<<s[n-1];
    }
}
