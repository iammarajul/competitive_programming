
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







int main()
{
	int n=Int,q=Int;

	std::vector<long long> vc;
	For(n) {
		int cc=Int;
		vc.pb(cc);
		if(i!=0) vc[i]+=vc[i-1];
	}
	int pos=-1;
	For(q)
	{
		ll x=LL;

		int hi=n-1,lo;
		if(pos==-1) lo=0;
		ll find;
		if(pos!=-1) find=x;



	}



    return 0;
}


