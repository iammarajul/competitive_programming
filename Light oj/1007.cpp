#include<bits/stdc++.h>
using namespace std;
#define SIZE 5000007
bool sieve[SIZE];
long long arr[SIZE];

void primeSieve ( int n )
{
    sieve[0] = sieve[1] = 1;



    for ( int i = 4; i <= n; i += 2 ) sieve[i] = 1;

    int sqrtn = sqrt ( n );
    for ( int i = 3; i <= sqrtn; i += 2 )
    {
        if ( sieve[i] == 0 )
        {
            for ( int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }
    int cnt=0;arr[0]=0,arr[1]=0;
    for(int i=2;i<=5000004;i++)
    {
        if(sieve[i]==0)
        {
            cnt++;
            arr[i]=arr[i-1]+(cnt*cnt);
        }
        else{
            arr[i]=arr[i-1];
        }
    }
}

int main()
{

    primeSieve(5000002);
    int x;
}
