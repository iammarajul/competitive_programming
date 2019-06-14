#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    for(int k=1;k<=test;++k)
    {
        int n,ans=0;
        scanf("%d",&n);
        while(n--)
        {
            int x;
            scanf("%d",&x);
            if(x>0) ans+=x;
        }
        printf("Case %d: ",k);
        cout<<ans<<endl;
    }
}
