#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;
    string s[n+1];

    for(int i=0;i<n;i++) cin>>s[i];

    sort(s,s+n);
    for(int i=0;i<n;i++) cout<<s[i]<<endl;
    /*
    int ss=0;
    for(int i=0;i<n-1;i++)
    {
        int l1=s[i].size();
        int l2=s[i+1].size();
        int p=0;
        for(int j=0;j<l2-l1;j++)
        {
            string kk=s[i+1].substr(i,l1);
            if(kk.compare(s[i])==0) {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            ss=1;
            cout<<"NO"<<endl;
            return 0;
        }
    }

    if(ss==0)
    {
        cout<<"YES"<<endl;

        for(int i=0;i<n;i++) cout<<s[i]<<endl;
    }*/
}
