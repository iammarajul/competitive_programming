#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x,y,d;
        scanf("%d%d%d%d",&n,&x,&y,&d);
        int dis=abs(y-x);
        if(dis%d==0)
        {
            printf("%d",dis/d);
        }
        else
        {
            int f1=abs(1-y);
            int t1=f1%d;
            int f2=abs(n-y);
            int t2=f2%d;

            int s1=ceil((double)(abs(1-x))/(double)d)+(ceil((double)(abs(1-y))/(double)d));
            int s2=ceil((double)(abs(n-x))/(double)d)+(ceil((double)(abs(n-y))/(double)d));
            if(t1==0 && t2!=0)
            {
                cout<<s1<<endl;
            }
            else if(t1!=0 && t2==0)
            {
                cout<<s2<<endl;
            }
            else if(t1==0 && t2==0)
            {
                cout<<min(s1,s2)<<endl;
            }
            else if(t1!=0 && t2!=0)
            {
                cout<<-1<<endl;
            }




        }


    }


    return 0;
}

