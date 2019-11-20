
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





int arr[100005];
int big[350];
int small[350];
int len;

int quary(int l, int r)
{
	int mn = 10000, mx = 0;
	int c_l = l / len,   c_r = r / len;
	if (c_l == c_r) {
		for (int i = l; i <= r; ++i)
		{
			mn = min(mn, arr[i]);
			mx = max(mx, arr[i]);
		}
	}
	else {
		for (int i = l, end = (c_l + 1) * len - 1; i <= end; ++i)
		{
			mn = min(mn, arr[i]);
			mx = max(mx, arr[i]);
		}
		for (int i = c_l + 1; i <= c_r - 1; ++i)
			{
				mn=min(mn,small[i]);
				mx=max(mx,big[i]);
			}
		for (int i = c_r * len; i <= r; ++i)
		{
				mn=min(mn,arr[i]);
				mx=max(mx,arr[i]);
		}
	}

	return mx-mn;
}

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int, q = Int;
	For(n) arr[i] = Int;
	len = sqrt(n);
	memset(big, 0, sizeof(big));
	memset(small, 10000, sizeof(small));

	for (int i = 0; i < n; i++)
	{
		big[i / len] = max(big[i / len], arr[i]);
		small[i / len] = min(small[i / len], arr[i]);
	}

	while (q--)
	{
		int l=Int,r=Int;

		printf("%d\n",quary(l,r));
	}


	return 0;
}


