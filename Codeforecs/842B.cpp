#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,d;
    cin>>r>>d;
    int nb;
    cin>>nb;
    int cnt=0;
    while(nb--)
    {
        int x,y,rd;
        cin>>x>>y>>rd;
        if(((x*x+y*y-((r-d)*(r-d)))>=0) &&(x*x+y*y-(r*r))<=0)
        {
            double s=sqrt((x*x)+(y*y));

            if((double)(rd+(r-d))<=s && (double)rd<=((double)r-s))
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
