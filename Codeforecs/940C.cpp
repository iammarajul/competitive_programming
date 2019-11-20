#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int arr[256];
    memset(arr+97,0,130);
    int n,k;
    string s,l;
    cin>>n>>k>>s;

    for(int i=0; i<s.size(); i++)
    {
        arr[s[i]]++;
    }

    //for(int i=97;i<=122;i++) cout<<arr[i]<<" ";
    if(k>n)
    {
        cout<<s;
        int m=97;
        while(arr[m]==0) m++;
        for(int i=0; i<k-n; i++) cout<<(char) m;
    }
    else
    {
        int i,p=0;
        for(i=k-1; i>=0; i--)
        {
            int m=(int) s[i];
            for(int j=m+1; j<=122; j++)
            {
                if(arr[j]>0)
                {
                    p=1;
                    m=j;
                    break;
                }
            }
            if(p==1)
            {
                s[i]=(char) m;
                break;
            }
        }
        //cout<<i<<endl;
        for(int j=0;j<=i;j++) cout<<s[j];
        int m=97;
        while(arr[m]==0) m++;
        for(int j=1;j<=k-i-1;j++) cout<<(char) m;


    }

}
