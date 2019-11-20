#include<bits/stdc++.h>
using namespace std;

vector<int> prime;
vector <int> p2;
char sieve[1002];
void sheive(int n)
{
    sieve[0] = sieve[1] = 1;

    prime.push_back(2);
    for ( int i = 4; i <= n; i += 2 ) sieve[i] = 1;

    int sqrtn = sqrt ( n );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }

    for ( int i = 3; i <= n; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}

int main()
{
    int n;
    cin>>n;
    sheive(n);
    if(n==1) cout<<0<<endl;
    else{

    for(int i=0;i<prime.size();i++)
    {
        int k=2;
        while(1)
        {
            int x=pow (prime[i],k);
            if(x>n) break;
            p2.push_back(x);
            k++;
        }
    }
    cout<<prime.size()+p2.size()<<endl;

    for(int i=0;i<prime.size();i++) cout<<prime[i]<<" ";
    for(int i=0;i<p2.size();i++) cout<<p2[i]<<" ";
    cout<<endl;
    }

}
