#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    scanf("%d",&n);
    for(int k=1; k<=n; k++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==1 || b==1) printf("Case %d: %d\n",k,a*b);
        else if(a==2 || b==2) {
            int mx=max(a,b);
            printf("Case %d: ",k);
            //if(mx==3) cout<<4<<endl;
            if(mx%4==0) cout<<mx<<endl;
            else if(mx%4==1) cout<<mx+1<<endl;
            else if(mx%4==2) cout<<mx+2<<endl;
            else cout<<mx+1<<endl;
        }
        else
        {
            int ans=0;
            for(int i=1; i<=a; i++)
            {
                for(int j=1; j<=b; j++)
                {
                    if((i+j)%2==0) ans++;
                }
            }

            printf("Case %d: %d\n",k,ans);
        }
    }
}
