
#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}


long long POW(long long a, long long b) {
	if (b == 0)
		return 1;
	long long res = POW(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}

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



int bs(int arr[1002], ll x, int n)
{
	int hi = n-1, lo = 0;
	while (lo <= hi)
	{
		int mid = (hi + lo) / 2;
		if (arr[mid] == x) return mid;
		else if (x > arr[mid]) lo = mid + 1;
		else hi = mid - 1;

	}
	return  -1;
}



int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int te = Int;
	for (int tes = 1; tes <= te; tes++) {
		int n = Int;

		int arr[n + 1];
		For(n) arr[i] = Int;
		ll p = LL;
		sort(arr,arr+n);

		int g = 0;
		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < n; j++)
			{
				if (i != j)
				{
					ll k = p - (long long)(arr[i] + arr[j]);
					if (bs(arr, k, n) != -1 && bs(arr, k, n) != i && bs(arr, k, n) != j) {printf("YES\n"); g = 1; break;}

				}
			}
			if (g == 1) break;
		}
		if (g == 0) printf("NO\n");
	}

	return 0;
}


