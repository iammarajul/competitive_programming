
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
		ll n = LL, k = LL;
		ll arr[n + 1];

		For(n) arr[i] = LL;
		ll as = k / n;
		ll re = k % n;

		if (as) {
			for (int i = 0; i < (n / 2 + (n % 2)); i++)
			{
				if (as % 3 == 1)
				{
					if (i == (n - (i % n) - 1)) {
						arr[i] = 0;
					} else {
						ll temp = arr[i];
						arr[i] = arr[i] ^ arr[n - (i % n) - 1];
						arr[n - (i % n) - 1] = temp;
					}
				}
				else if (as % 3 == 2)
				{
					if (i == (n - (i % n) - 1)) {
						arr[i] = 0;
					} else {
						ll temp = arr[n - (i % n) - 1];
						arr[n - (i % n) - 1] = arr[i] ^ arr[n - (i % n) - 1];
						arr[i] = temp;
					}
				}
				else
				{
					if (i == (n - (i % n) - 1)) {
						arr[i] = 0;
					}
				}
			}
		}

		for (int i = 0; i < re; i++) {
			arr[i] = arr[i] ^ arr[n - (i % n) - 1];
		}
		for (int i = 0; i < n; i++)
		{
			printf("%lld", arr[i]);
			if (i != n - 1)  printf(" ");
		}
		printf("\n");

	}
	return 0;
}


