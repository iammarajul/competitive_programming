#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,m,cnt=0;
    cin>>x;
    for(int i=1;1; i++)
    {
        int k=i,sum=0;
        while(k>0)
        {
            sum+=k%10;
            k=k/10;
        }
        if(sum==10) cnt++;
        if(cnt==x)
        {
            cout<<i<<endl;
            break;
        }

    }

}
