#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    cin>>n>>m>>k;
    if(2*n*m%k!=0) cout<<"NO"<<endl;
    else
    {
        int low=1,hi=n;int mid=(low+hi)/2;
        double x=(double)((2*n*m)/k)/(double) mid;
        if(x<m) hi=mid;
        else lo=mid;
        for(int i=lo;i<=hi;i++)
        {
            if()
        }
    }
}
