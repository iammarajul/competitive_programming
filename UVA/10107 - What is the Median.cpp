#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int arr[100077];
    int cnt=0;
    while(scanf("%d",&n)!=EOF)
    {
        arr[cnt]=n;
        cnt++;
        int x=cnt;
        sort(arr,arr+cnt);
        if(x%2!=0) cout<<arr[x/2]<<endl;
        else
        {
            cout<<((arr[x/2]+arr[(x-1)/2])/2)<<endl;
        }


    }
}
