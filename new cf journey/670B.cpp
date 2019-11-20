
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
#define  MAX              100007;






int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n=LL,k=LL;
    int arr[n+1];

    for(int i=1;i<=n;i++) arr[i]=Int;
    double x1=((-1.0+sqrt(.5+1.0+4.0*(double)k*2.0))/2.0);
	//cout<<x1<<endl;
    ll c=(int) x1;

    ll sum=(c*(c+1))/2;
    ll x=k-sum;
    if(x==0) x=c;
    else  x=k-sum;
    cout<<arr[x]<<endl;



    
    return 0;
}


