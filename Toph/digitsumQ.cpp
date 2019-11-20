
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


int n, q, arr[100004], num[325], idx[325], len;

int number, index1;


int sod(int n)
{
	int ans = 0;
	while (n > 0)
	{
		int p = n % 10;
		ans += p;
		n = n / 10;
	}

	return ans;
}


void quary(int l, int r)
{
	l--, r--;
	int c1 = l / len, c2 = l / len;
	if (c1 == c2)
	{
		for (int i = l; i <= r; i++)
		{
			if (arr[i] > number)
			{
				number = arr[i];
				index1 = i;
			}
		}
	}

	else
	{
		for (int i = l, end = (c1 + 1) * len - 1; i <= end; i++)
		{
			if (arr[i] > number)
			{
				number = arr[i];
				index1 = i;
			}
		}
		for (int i = c1 + 1; i <= c2 - 1; i++)
		{
			if (num[i] > number)
			{
				number = num[i];
				index1 = idx[i];
			}

		}
		for (int i = c2 * len; i <= r; i++)
		{
			if (arr[i] > number)
			{
				number = arr[i];
				index1 = i;
			}
		}
	}
	index1++;
}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tes = Int;

	for (int te = 1; te <= tes; te++) {

		n = Int, q = Int;


		memset(num , 0 , sizeof(num));

		For(n)
		{
			int x = Int;
			arr[i] = sod(x);
		}

		len = sqrt(n);

		for (int i = 0; i < n; i++)
		{
			if (arr[i] > num[i / len])
			{
				num[i / len] = arr[i];
				idx[i / len] = i;
			}
		}
		printf("Case #%d:\n", te);
		while (q--)
		{
			number = 0;
			int l = Int, r = Int;

			quary ( l, r);

			printf("%d %d\n", number , index1);


		}

	}






	return 0;
}


