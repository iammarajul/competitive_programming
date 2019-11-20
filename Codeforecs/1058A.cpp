#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1) p=1;
    }
    if(p==1) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}
