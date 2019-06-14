#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000009

vector <int> prime; // Stores generated primes
char sieve[SIZE]; // 0 means prime
void primeSieve ( int n )
{
    sieve[0] = sieve[1] = 1; // 0 and 1 are not prime

    prime.push_back(2); // Only Even Prime
    for ( int i = 4; i <= n; i += 2 ) sieve[i] = 1; // Remove multiples of 2

    int sqrtn = sqrt ( n );
    for ( int i = 3; i <= sqrtn; i += 2 )
    {
        if ( sieve[i] == 0 )
        {
            for ( int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }

    for ( int i = 3; i <= n; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}
int isprime(long long s)
{
    int sq=(int)(sqrt(s)+.5);
    for(int i=2; i<=sq; i++)
    {
        if(s%i==0) return 0;
    }
    return 1;
}

int main()
{
    long long n;
    cin>>n;
    if(isprime(n)==1) cout<<1<<endl;
    else
    {
        primeSieve ( 1000002);
        if(n%2==0) cout<<n/2<<endl;
        else
        {
            for(int i=0;; i++)
            {
                if(n%prime[i]==0)
                {
                    cout<<(((n-prime[i])/2)+1)<<endl;
                    return 0;
                }
            }
        }
    }

}
