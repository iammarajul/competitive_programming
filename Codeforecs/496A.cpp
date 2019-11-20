#include<bits/stdc++.h>
using namespace std;
int arr[200];
bool cheak(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)
            return false;
    }
    return true;
}

int main()
{

    int n,x,y;
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int pk;
        cin>>pk;
        arr[pk]=1;
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        int pk;
        cin>>pk;
        arr[pk]=1;
    }


    if(cheak(n)==true)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;




}
