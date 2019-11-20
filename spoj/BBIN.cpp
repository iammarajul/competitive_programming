#include<bits/stdc++.h>
using namespace std;


//int ar2[100007];
map<long long,int >arr;
int main()
{
    int n,q;
    cin>>n>>q;

    //memset(ar2,-1,100001);
    for(int i=0; i<n; i++)
    {
        long long p;
        cin>>p;

            arr[p]=i+1;
    }


    while(q--)
    {
        int a;
        cin>>a;
        if(arr[a])
            cout<<arr[a]-1<<endl;
        else cout<<-1<<endl;


    }
}
