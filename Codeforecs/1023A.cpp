#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string t,s,st0,st1,st;
    cin>>t>>s;
    int ng=0;
    int dis=m-n+1;

    if(n-1>m)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        if(t[i]=='*')
        {
            ng=1;
            st0=t.substr(0,i);
            st=s.substr(i,dis);
               st1=t.substr(i+1,n-i-1);
            // cout<<st0<<" "<<i<<" "<<n-i-1<<" "<<st1;
            break;
        }
    }
    //cout<<t.substr(5,1);

    // cout<<st0<<" "<<st1;


    if(ng==0)
    {
        if(t.compare(s)==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;
    }


    //cout<<dis<<endl;
    int p=0;
    string pk=st0+st+st1;
    if(pk.compare(s)==0)
    {
        cout<<"YES"<<endl;
        p=1;
    }


    if(p==0)
        cout<<"NO"<<endl;

}
