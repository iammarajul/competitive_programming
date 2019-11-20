
#include<bits/stdc++.h>
using namespace std;

int arr[1007];

int main()
{
    int m,n,q;
    cin>>n>>m>>q;
    string s1,s2;
    cin>>s1>>s2;

    /*for(int i=0;i<=n-m;i++)
    {
        string s3=s1.substr(i,m);
        if(s3.compare(s2)==0)
            arr[i]=1;
    }*/

   /* for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/

    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=a-1;i<=b-m;i++)
        {
            string s3=s1.substr(i,m);
            if(s3.compare(s2)==0)
            sum++;
        }
        cout<<sum<<endl;
    }
}
