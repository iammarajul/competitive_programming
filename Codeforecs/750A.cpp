#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,p=0;
    cin>>n>>k;
    int total=k;
    for(int i=0;i<=n;i++)
    {
        total+=(5*i);
        if(total>(240))
        {
            cout<<i-1<<endl;
            p=1;
            return 0;
        }
    }
    if(p==0) cout<<n<<endl;
}
