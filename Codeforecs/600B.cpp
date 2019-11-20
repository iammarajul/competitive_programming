#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int l,int x)
{
    int lo=0,hi=l;
    while(1)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]<=x)
        {
            lo=mid;
        }
        else if(x<arr[mid])
        {
            hi=mid;
            for(int i=hi;; i--)
            {
                if(x>=arr[i])
                    return i+1;
            }


        }
    }

}

int main()
{
    int n,m;
    cin>>n>>m;
    vector< int > arr;
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }

    sort(arr.begin(),arr.end());
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;


    }

}
