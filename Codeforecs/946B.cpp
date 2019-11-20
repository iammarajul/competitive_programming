#include<bits/stdc++.h>
using namespace std;

long long a,b;



int main()
{

    cin>>a>>b;

    // fun(p,q);

    while(1)
    {
        if(a==0 || b==0) break;
        else if(b<=powl(10,9))
        {
            if(a>=2*b)
            {
                a=a-2*b;
                if(a==0 || b==0) break;
            }
        }
        if(a<=powl(10,9))
        {
            if(b>=2*a) b=b-2*a;

            else
                break;

        }


    }

    cout<<a<<" "<<b<<endl;

}
