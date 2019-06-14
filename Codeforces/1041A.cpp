#include<bits/stdc++.h>
using namespace std;
//map<int,bool >mp;
int main()
{
    int n;
    cin>>n;

    int ma=-1;
    long long mi=1000000000000;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<mi) mi=x;
        if(x>ma) ma=x;


    }

    int k=ma-mi+1;
    cout<<abs(k-n)<<endl;
}
