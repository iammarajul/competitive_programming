
#include<bits/stdc++.h>
using namespace std;



int sc1(){int x; scanf("%d",&x); return x;}

long long sc2(){long long x;scanf("%lld",&x);return x;}

#define  gcd(a,b)         __gcd(a,b)
#define  lcm(a,b)         (a*b)/gcd(a,b)
#define  Int              sc1()
#define  LL               sc2()
#define  For(n)           for(int i=0;i<n;i++)
#define  Forj(n)          for(int j=0;j<n;j++)
#define  Fork(n)          for(int k=0;k<n;k++)
#define  For1(n)          for(int i=1;i<=n;i++)
#define  ll               long long
#define  vi               std::vector<int>
#define  vll              std::vector<ll>
#define  qui              qu
#define  pb               push_back
#define  mpsi             std::map<string, int>
const ll mod= 10e9+7;
inline int sub(int a, int b) {a -= b; return a < 0 ? a + mod : a;}

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return (res%mod * res%mod * a%mod)%mod;
    else
        return (res%mod * res%mod)%mod;


}

int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n=Int,m=Int;

    ll x=binpow(binpow(2,n),m);
    //cout<<x<<endl;



    ll x2 =(binpow( binpow(2,n-1),m)%mod * n %mod)%mod -n+1;

    ll ans=sub(x,x2);
    cout<<ans<<endl;
    
    return 0;
}


