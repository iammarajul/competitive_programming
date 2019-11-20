#include<bits/stdc++.h>
using namespace std;
int arr[1007];
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<=n-m; i++)
    {
        string s3=s1.substr(i,m);
        if(s3.compare(s2)==0)
        {

            arr[i]=1;

        }

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<q; i++)
    {
        int a,b,cnt=0;
        cin>>a>>b;
        if(b-a+1<m) cout<<0<<endl;
        else
        {
            if(m!=1)
            {
                for(int j=a-1; j<b-1; j++)
                {
                    cnt+=arr[i];
                }
            }
            else
            {
                for(int j=a-1; j<b; j++)
                {
                    cnt+=arr[i];
                }
            }
        }

        cout<<cnt<<endl;
    }

}
