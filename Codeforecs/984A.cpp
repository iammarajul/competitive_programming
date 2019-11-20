#include<bits/stdc++.h>
using namespace std;
bool arr2[1006];
int main()
{
    int n;
    cin>>n;
    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>arr[i];
        //vc.push_back(x);
    }

    sort(arr,arr+n);
    int l=n-1;
    int k=0;
    for(int i=1; i<=n-1; i++)
    {
        if(i%2!=0){
        arr2[l]=1;
        l--;
        }
        else
        {
            arr2[k]=1;
            k++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr2[i]==0)
        {
            cout<<arr[i]<<endl;
        }
    }


}
