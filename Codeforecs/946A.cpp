#include<bits/stdc++.h>
using namespace std;

int arr[102];
int sum1=0,sum2=0;

bool cheak(int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            return true;
    }
    return false;
}

void sum(int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
            sum1+=arr[i];
        else
            sum2+=arr[i];
    }
    //cout<<sum1<<" "<<sum2<<endl;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum(n);

    if(cheak(n)==true)
    {
        cout<<sum1-sum2;
    }
    else
    {
        //sort(arr,arr+n);
        cout<<sum1<<endl;
    }

}
