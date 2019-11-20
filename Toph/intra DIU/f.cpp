
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

	int n = Int, m = Int;

	int arr[n + 1][m + 1];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}


	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 1; j <= m; j++) {
				cout << arr[i][j];
				if (i == n && j == m) cout << endl;
				else cout << " ";
			}
		}
		else
		{
			for (int j = m; j >= 1; j--) {
				cout << arr[i][j];
				if (i == n && j == 1) cout << endl;
				else cout << " ";
			}
		}
	}



	return 0;
}


