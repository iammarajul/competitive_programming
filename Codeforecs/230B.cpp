#include<bits/stdc++.h>
using namespace std;

int arr[10000111];

void sheive()
{
    int s;
    s=sqrt(10000090);
    arr[1]=1;
    for(int i=4;i<=10000090;i+=2) arr[i]=1;
    for(int i=3;i<=s;i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i;i*j<=10000090;j+=2) arr[i*j]=1;
        }
    }
    //for(int i=1;i<100;i++) {if(arr[i]==0) cout<<i<<" ";}
}

int squre(long long a)
{
    long long s=sqrt(a);
    if(s*s==a) return s;
    else return 0;
}

int main()
{
    int n;
    sheive();
    //cout<<squre(999966000289);

    long long ora[100001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ora[i];
    }
    for(int i=0;i<n;i++)
    {
        int kk;
        kk=squre(ora[i]);
        if(ora[i]==1) cout<<"NO"<<endl;
        else if(kk!=0 && arr[kk]==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
