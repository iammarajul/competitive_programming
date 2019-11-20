#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    if(a>0 && b==1)cout<<"NO"<<endl;
    else if(b==0) cout<<"NO"<<endl;
    else if((a-b)<-1)
        cout<<"NO"<<endl;
    else
    {
        long long k;
        k=a-b+1;
        //cout<<k/2;
        if((k%2)==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
