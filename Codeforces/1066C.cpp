#include<bits/stdc++.h>
using namespace std;
int id[300000];
int main()
{
    int n;
    cin>>n;
    int kh=n;
    long long left=0,right=0;
    for(int i=1;i<=n;i++)
    {
        char ch;
        int x;
        cin>>ch>>x;
        if(i==1) id[x]=0;
        else
        {
            if(ch=='L') id[x]=--left;
            else if(ch=='R') id[x]=++right;
            else
            {
                int l,r;
                //cout<<left<<" "<<right<<" "<<id[x]<<endl;

                if(id[x]<=0)
                {
                    l=abs(-left+id[x]);
                    r=abs(right-id[x]);
                }
                else
                {
                    r=abs(right-id[x]);
                    l=abs(id[x]-left);
                }
                //cout<<l<<" "<<r<<endl;
                cout<<min(r,l)<<endl;
            }
        }

    }
}

