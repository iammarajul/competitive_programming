
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
    int n=Int;
    int a[n+1],b[n+1];
    a[0]=0,b[0]=0;
    for(int i=1;i<=n;i++)
    {
    	a[i]=Int;
    	b[i]=Int;
    }
    ll ans=0;

    for(int i=1;i<=n;i++)
    {
    	int x=a[i]-a[i-1];
    	int y=b[i]-b[i-1];
    	ans+=min(x,y);
    	a[i]=min(x,y),b[i]=min(x,y);
    }

    cout<<ans<<endl;
    
    return 0;
}


