
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







int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tes = Int;

	while (tes--)
	{
		int a, b, q;
		cin >> a >> b >> q;
		int x[a + 1], y[b + 1];
		memset(x, 0, sizeof(x));
		memset(y, 0, sizeof(y));
		ll ans = 0;
		while (q--)
		{
			int ax, ay;
			cin >> ax >> ay;
			x[ax]++;
			y[ay]++;




		}
		int odd = 0, even = 0;
		for (int i = 1; i <= b; i++)
		{
			if (y[i] % 2) odd++;
			else even++;
		}

		for (int i = 1; i <= a; i++)
		{
			if (x[i] % 2 == 0) ans += (ll)odd;
			else ans += (ll)even;
		}
		cout << ans << endl;
	}

	return 0;
}


