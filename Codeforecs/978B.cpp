#include<bits/stdc++.h>
using namespace std;
int arr2[1002];
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    vector<int>vc;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr2[arr[i]]==1)
        {
            vc.push_back(arr[i]);
        }
        arr2[arr[i]]--;
    }
    cout<<vc.size()<<endl;
    for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
    cout<<endl;
}

