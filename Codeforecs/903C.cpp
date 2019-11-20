#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>::iterator it;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];

    //sort(arr,arr+n);
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(it=mp.begin();it!=mp.end();++it)
    {
        int x=(it->second)-1;
        vc.push_back(x);
    }

    sort(vc.begin(),vc.end(),greater<int>());
    cout<<vc[0]+1<<endl;
}
