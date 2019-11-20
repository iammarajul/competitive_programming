
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
	int q = Int;

	while (q--)
	{
		int n = Int, k = Int;

		int arr[n + 1];
		int hi = 0, lo = 999999999;
		For(n) {arr[i] = Int; hi = max(hi, arr[i]); lo = min(lo, arr[i]);}
		if (abs(lo - hi) > k*2) cout << -1 << endl;
		else {
			lo -= k;
			hi += k;
			int ans = -1;
			while (lo <= hi)
			{

				int mid = (lo + hi) / 2;
				int x = -1;
				for (int i = 0; i < n; i++)
				{
					if (abs(mid - arr[i]) > k)
					{
						x = arr[i];
					}
				}
				if (x == -1)
				{
					ans = mid;
					lo = mid + 1;
				}
				else if (x < mid)
				{
					hi = mid - 1;
				}
				else
				{
					lo = lo + 1;
				}

			}

			cout << ans << endl;
		}


	}


	return 0;
}


