#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x>36)
        cout<<-1<<endl;
    else
    {
        if(x%2==0)
        {
            for(int i=0;i<x/2;i++) cout<<"8";
        }
        else
        {
            for(int i=0;i<x/2;i++) cout<<"8";
            cout<<"6";
        }
    }



}
