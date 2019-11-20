
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





std::vector<ll> v;



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	int a[n + 1], b[n + 1], c[n + 1], d[n + 1];

	for (int i = 0; i < n; i++)
	{
		a[i] = Int;
		b[i] = Int;
		c[i] = Int;
		d[i] = Int;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			v.pb(c[i]+d[j]);
		}
	}

	sort(v.begin(), v.end());

	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ll k = (ll)a[i] + (ll)b[j];
			ll x = 0 - k;

			int m1=lower_bound (v.begin(), v.end(), x)- v.begin();
			int m2=upper_bound (v.begin(), v.end(), x)- v.begin();

			ans+=(ll) (m2-m1);


		}
	}

	cout << ans << endl;



	return 0;
}


