
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



int arr[106];

int fnd(int n, int x)
{
	for (int i = 1; i <= n; i++) if (arr[i] == x) return i;
}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int te = Int;

	for (int tes = 1; tes <= te; tes++) {

		int n = Int;


		For1(n) arr[i] = Int;
		int ans = 0;
		for (int i = 1; i <= n; i++)
		{
			int x = fnd(n, i);
			if (x != i)
			{
				swap(arr[x], arr[i]);
				ans++;
			}
		}
		printf("Case %d: ", tes);
		printf("%d\n", ans );
	}

	return 0;
}


