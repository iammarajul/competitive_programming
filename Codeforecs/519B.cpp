#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
map<int,int> mp2;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i=0; i<n-1; i++)
    {
        int x;
        cin>>x;
        mp2[x]++;
    }
    int s1,s2;

    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]!=mp2[arr[i]])
        {
            s1=arr[i];
            break;
        }
    }
    mp2.erase(mp2.begin(),mp2.end());
    for(int i=0; i<n-2; i++)
    {
        int x;
        cin>>x;
        mp2[x]++;
    }
    for(int i=0; i<n; i++)
    {
        if(mp[arr[i]]!=mp2[arr[i]] && arr[i]!=s1)
        {
            s2=arr[i];
            break;
        }
    }

    cout<<s1<<endl<<s2<<endl;


}
