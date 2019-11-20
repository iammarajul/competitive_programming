#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m;
    double x,y,z,temp,ans;
    scanf("%lf%lf",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%lf%lf",&x,&y);
        temp=x/y;
        if(i!=0)
        {
            if(z<temp) swap(z,temp);
        }
        z=temp;

    }
    ans=m*z;
    printf("%.8lf",ans);
}
