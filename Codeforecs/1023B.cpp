#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,cnt=0;
    cin>>n>>k;
    if(k/2+1>n) cout<<0<<endl;
    else{

        long long ans=k-(n/2+1)+1;
        cout<<ans<<endl;
    }



}
