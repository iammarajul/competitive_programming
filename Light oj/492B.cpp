#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        //int x;
        cin>>arr[i];

    }
    arr[n]=l;
    sort(arr,arr+n+1);
    double mi=(double)arr[0]-0.0;
    for(int i=1;i<n;i++)
    {
        if(i!=)
        double p=((double)arr[i+1]-(double)arr[i])/2;
        mi=max(mi,p);
    }
}
