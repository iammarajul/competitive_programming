
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





int arr[10];


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	string a, b;
	cin >> a >> b;

	For(n) arr[b[i] - '0']++;
	int aa = 0, bb = 0;
	for (int i = 0; i < n; i++)
	{
		int x = a[i] - '0';
		int p = 0;
		for (int j = x + 1; j <= 9; j++)
		{
			if (arr[j]) {p = 1;bb++; arr[j]--; break;}
		}
		//if (!p && arr[x]) arr[x]--, p = 1;
		if (!p)
		{
			for (int j = 0; j <= x; j++)
			{
				if (arr[j]) {p = 1;  arr[j]--; break;}
			}
		}

	}
	memset(arr, 0, sizeof(arr));
	For(n) arr[b[i] - '0']++;
	for (int i = 0; i < n; i++)
	{
		int x = a[i] - '0';
		int p = 0;
		if (arr[x]) {arr[x]--, p = 1; }
		if (!p) {
			for (int j = x + 1; j <= 9; j++)
			{
				if (arr[j]) {p = 1; arr[j]--; break;}
			}
		}

		if (!p)
		{
			for (int j = 0; j < x; j++)
			{
				if (arr[j]) {p = 1;aa++; arr[j]--; break;}
			}
		}

	}
	cout << aa << "\n" << bb << endl;


	return 0;
}


