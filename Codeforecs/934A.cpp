#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    long long ar1[51],ar2[51];
    long long ar3[2600],ar4[51];
    for(int i=0; i<n; i++) cin>>ar1[i];
    for(int i=0; i<m; i++) cin>>ar2[i];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ar3[j]=ar1[i]*ar2[j];
        }
        sort(ar3,ar3+m);
        ar4[cnt]=ar3[m-1];
        //cout<<ar3[m-1]<<endl;
        cnt++;
    }
    sort(ar4,ar4+cnt);
    //cout<<cnt<<endl;

    cout<<ar4[cnt-2]<<endl;
}
