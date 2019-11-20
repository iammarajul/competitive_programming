#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
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
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int k=arr[i];
        bool pk=false;
        for(int j=1; j<=30; j++)
        {
            int pp=pow(2,j);
            if(mp[(pp-k)]!=0)
            {
                if(k==(pp-k))
                {
                    if(mp[k]>1)
                    {
                        pk=true;
                        break;
                    }
                    else
                    {

                    }
                }
                else
                {
                    pk=true;
                    break;
                }
            }
        }
        if(pk==false) ans++;

    }

    cout<<ans<<endl;
}
