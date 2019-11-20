#include<bits/stdc++.h>
using namespace std;
vector<int >vc;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    vc.push_back(n);
    int jj=n;
    while(1)
    {
        int x=arr[jj-1];
        vc.push_back(x);
        if(x==1) break;
        jj=x;
    }
    for(int i=vc.size()-1;i>=0;i--)
    {
        cout<<vc[i]<<" ";
    }
}
