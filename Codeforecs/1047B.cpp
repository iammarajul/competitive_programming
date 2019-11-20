#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long ma=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a+b>ma) ma=a+b;
    }
    cout<<ma<<endl;

}
