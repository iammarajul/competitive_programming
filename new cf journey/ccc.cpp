
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




std::vector<int> di;

void divisior(int n)
{
	int sq = sqrt(n);

	for (int i = 1; i <= sq; i++)
	{
		if (n % i == 0)
		{
			int a = n / i;
			if (i == a) di.pb(i);
			else
			{
				di.pb(i);
				di.pb(a);
			}
		}
	}
}



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	divisior(n);

	std::vector<ll> res;
	for (int i = 0; i < di.size(); i++)
	{
		int x = di[i];
		int c = n / x  - 1;

		ll ans = (ll)((ll)x * (((ll)c * ((ll)c + 1LL)) / 2LL));
		ans+=(c+1);
		res.pb(ans);
	}

	sort(res.begin(), res.end());

	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<" ";
	}



	return 0;
}


