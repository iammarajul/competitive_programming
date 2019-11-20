#include<bits/stdc++.h>
using namespace std;

map<long long,int> mp;
map<long long,int>::iterator it;

int main()
{
    int x;
    cin>>x;
    int arr[x+1];
    for(int i=0; i<x; i++)
        cin>>arr[i];
    sort(arr,arr+x);
    for(int i=0;i<x-1;i++)
    {
        long long distance;
        distance=arr[i+1]-arr[i];
        mp[distance]+=1;

    }
    it=mp.begin();
    cout<<it->first<<" "<<it->second<<endl;

}
