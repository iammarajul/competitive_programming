#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    int arr[10006]={0};
    int ar2[10006];
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>arr[i];
    while(m--)
    {
        int l,m,x;
        cin>>l>>m>>x;
        for(int j=l;j<=m;j++)
        {
            if(arr[j]<arr[x])
                l++;
        }
        //l--;
        if(l==x) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
