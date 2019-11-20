#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k,l;

    cin>>n>>m>>k>>l;

    long long as=n/m;
    if(as<=0) cout<<-1<<endl;
    else
    {
        long long sk=n-k;
        if(l>sk) cout<<-1<<endl;
        else
            cout<<as<<endl;

    }

}
