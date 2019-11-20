#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long sum=0;
    int mt=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        x=x+sum;
        int cnt=x/m;
        cout<<cnt<<" ";
        sum=x%m;


        //mt=ans;

    }
}
