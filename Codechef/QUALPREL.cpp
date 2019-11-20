#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        vector<int>arr;
        vector<int>::iterator up;
        for(int i=0; i<n; i++)
        {
            int x;
            scanf("%d",&x);
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        //for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
        //cout<<endl;
        //cout<<arr[k-1]<<endl;

        up=lower_bound(arr.begin(),arr.end(),arr[n-k]);
        cout<<n-(up-arr.begin())<<endl;

        //arr.erase(arr.begin(),arr.end());*/

    }
}
