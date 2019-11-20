
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
		int n = Int, k = Int, p = Int;

		int arr[n + 1];
		For(n) arr[i] = Int;

		if (k % 2 != 0)
		{
			if (p == 0) cout << *max_element(arr, arr + n) << endl;
			else cout << *min_element(arr, arr + n) << endl;
		}
		else
		{
			if (p == 1)
			{
				int mi = 999999999;
				for (int i = 0; i < n; i++)
				{
					if (i != 0 || i != n - 1) mi = min(mi, (max(arr[i - 1], arr[i + 1])));
					else if (i == 0)
					{
						mi = min(mi, (max(arr[i + 1], arr[i + 1])));
					}
					else if (i == n - 1)
					{
						mi = min(mi, (max(arr[i - 1], arr[i - 1])));
					}
				}

				cout << mi << endl;
			}
			else
			{
				int mi = 0;
				for (int i = 0; i < n; i++)
				{
					if (i != 0 || i != n - 1) mi = max(mi, (min(arr[i - 1], arr[i + 1])));
					else if (i == 0)N
					{
						mi = max(mi, (min(arr[i + 1], arr[i + 1])));
					}
					else if (i == n - 1)
					{
						mi = max(mi, (min(arr[i - 1], arr[i - 1])));
					}
				}
				cout << mi << endl;
			}





		}
	}
	return 0;
}


