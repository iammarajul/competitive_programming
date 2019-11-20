
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
#define  MAX              100007;


struct Ab
{
	int a, b, c;
} node[200004];

bool cmp(Ab A , Ab B)
{
	if (A.a > B.a) return 1;
	if (A.a < B.a) return 0;
	if (A.b > B.a) return 1;
	if (A.b < B.a) return 0;


}

map< int, int >mp3;
std::vector<int> v1;
std::vector<int> v2;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n = Int;

	for (int i = 0; i < n; i++)
	{
		int x = Int;
		mp3[x]++;
	}

	int m = Int;

	for (int i = 0; i < m; i++)
	{
		int x = Int;
		v1.pb(x);

	}
	for (int i = 0; i < m; i++)
	{
		int x = Int;
		v2.pb(x);
	}
	int cx = 0, cy = 0, ans = 0;
	for (int i = 0; i < m; i++)
	{
		int x = mp3[v1[i]];
		int y = mp3[v2[i]];
		if (x > cx)
		{
			ans = i;
			cx = x;
			cy = y;
		}
		else if (x == cx)
		{
			if (y > cy) {
				cy = y;
				ans = i;
			}
		}


	}


	
	cout << ++ans << endl;




	return 0;
}


