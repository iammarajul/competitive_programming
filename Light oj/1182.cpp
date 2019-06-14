#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        int x;
        cin>>x;
        int ans=__builtin_popcountll(x);
        if(ans%2==0)
            printf("Case %d: even\n",k);
        else
            printf("Case %d: odd\n",k);
    }
}
