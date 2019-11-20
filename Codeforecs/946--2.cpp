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
        else if(a*2<=b)
        {
           b=b%a;
           a=a;
        }
        else if(2*b<=a)
        {
            a=a%b;
            b=b;
        }
        else
            break;
    }

    cout<<a<<" "<<b<<endl;

}
