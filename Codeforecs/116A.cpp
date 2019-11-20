#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int sum=0,ins=0;
    while(x--)
    {
        int a,b;
        cin>>a>>b;
        int pep=ins-a;
        pep=pep+b;
        ins=pep;
        if(pep>sum) sum=pep;

    }
    cout<<sum<<endl;
}
