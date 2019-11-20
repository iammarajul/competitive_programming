#include<bits/stdc++.h>
using namespace std;

vector< int >vc;
int arr[200004];
int main()
{
    int n;
    cin>>n;
    //int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
            vc.push_back(i);
    }
    int ff=vc.size();
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
       int dis1=abs(vc[cnt]-i);
       if(dis1==0) {
            if(cnt!=(vc.size()-1))
            cnt++;
            cout<<0<<" ";
       }
       else if(cnt!=0 && ff>1)
       {
           int dis2=abs(i-vc[cnt-1]);
           if(dis1>dis2) cout<<dis2<<" ";
           else cout<<dis1<<" ";

       }
       else if(cnt==(vc.size()-1))
       {
           cout<<abs(i-vc[cnt])<<" ";
       }
       else if(cnt==0)
        cout<<dis1<<" ";

    }
}
