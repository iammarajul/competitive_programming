#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    int arr[100000];
    cin>>a>>b;

    for(int i=1;i<=b;i++)
    {
        int r;
        r=a%i;
        if(arr[r]!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
            arr[r]=1;


    }
    cout<<"YES"<<endl;

}
