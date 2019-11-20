#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x=0;
    cin>>n;
    while(n--)
    {


    string a;
    cin>>a;
    if(a=="++X" || a=="X++") x++;
    else x--;

    }
    cout<<x<<endl;

}
