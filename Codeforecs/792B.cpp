#include<bits/stdc++.h>
using namespace std;
bool arr[105];

int main()
{
    int n,hh;
    cin>>n>>hh;

    int led=1;

    for(int i=0; i<hh; i++)
    {
        int x;
        cin>>x;
        int sim=x%(n-i);
        int cnt=0;
        int j;
        for(j=led;; j++)
        {
            if(cnt==sim) break;
            if(arr[j]==0 && j!=led) cnt++;
            if(cnt==sim) break;
            if(j==n) j=0;

        }
        //if(j==0) j++;
        arr[j]=1;
        cout<<j<<" ";
        if(j==n) j=1;
        for(int k=j;; k++)
        {
            if(arr[k]==0)
            {
                led=k;
                break;
            }
            if(k==n) k=0;
        }
        //cout<<led<<endl;


    }

}
