
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int bb=1; bb<=test; bb++)
    {
        int n;
        cin>>n;
        int x=__builtin_popcount(n);
        //cout<<x;
        for(long long i=n+1; 1; i++)
        {
            if(__builtin_popcount(i)==x)
            {
                cout<<"Case "<<bb<<": ";
                cout<<i<<endl;
                break;
            }
        }


    }


}
