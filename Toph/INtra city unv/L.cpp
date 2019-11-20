
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
#define  MAX              100007





void sod(ll x)
{
	std::vector<int> v;
	while(x>0)
	{
		v.pb(x%10);
		x/=10;
	}

	cout<<v[v.size()-1]<<" ";

	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=0) {cout<<v[i]<<endl;return;}
	}
}


int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll m=LL,n=LL,p=LL;

    ll xx=(p-m)*(p-n);

    sod(xx);

    
    
    
    return 0;
}


