#include<bits/stdc++.h>
using namespace std;

struct aa
{
    int a,b;
};

int main()
{
    int n,m;
    cin>>n>>m;
    aa arr[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i].a>>arr[i].b;
    }

    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(arr[i].b<arr[j].b)
            {
                swap(arr[i].b,arr[j].b);
                swap(arr[i].a,arr[j].a);
            }
        }
    }
    int sum=0,cnt=0;

    for(int i=0;i<m;i++)
    {
        int x;
        cnt+=arr[i].a;
        if(cnt>n){
            x=arr[i].a-(cnt-n);
            cnt=n;
        }
        else
            x=arr[i].a;

        sum+=x*arr[i].b;
        if(cnt==n)
            break;
    }
    cout<<sum<<endl;

}
