
#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}



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








int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;
	std::vector<int> o;
	std::vector<int> e;

	ll sum=0;
	For(n) {
		int x=Int;
		sum+=(ll)x;
		if (x % 2 == 0) {e.pb(x);}
		else {o.pb(x);}
	}

	
	int ol=o.size(),el=e.size();
	sort(o.begin(), o.end(),greater<int>());
	sort(e.begin(), e.end(),greater<int>());
	
	if(ol<el)
	{
		ll sum1=0,sum2=0;

		for(int i=0;i<ol;i++) sum1+=(ll) o[i];
		for(int i=0;i<ol+1;i++) sum2+=(ll) e[i];
		cout<<sum-(sum1+sum2)<<endl;
	}
	else if(ol>el)
	{
		ll sum1=0,sum2=0;

		for(int i=0;i<el+1;i++) sum1+=(ll) o[i];
		for(int i=0;i<el;i++) sum2+=(ll) e[i];
		cout<<sum-(sum1+sum2)<<endl;
	}
	else 
	{
		cout<<0<<endl;
	}










	return 0;
}


