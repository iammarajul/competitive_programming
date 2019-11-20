#include<bits/stdc++.h>
using namespace std;

int arr[102];

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }
    int cnt=0;
    for(int i=1; i<=100; i++)
    {
        if(arr[i]!=0) cnt++;
    }
    int co=0;
    if(cnt<b) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=1; i<=100; i++)
        {
            if(arr[i]!=0) {cout<<i<<" ";
            co++;}
            if(co==b) break;
        }
    }

}
