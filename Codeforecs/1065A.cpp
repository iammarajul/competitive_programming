#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long s,a,b,c;
        cin>>s>>a>>b>>c;
        long long pk=s/c;
        long long ans=(pk+(pk/a)*b);
        cout<<ans<<endl;

    }

}
