
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



int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m, k;
int vis[501][502];
string s[502];
int mx, cnt;

void dfs(int sx , int sy ) {

	if (cnt >= mx - k) return;
	int x = sx, y = sy;
	vis[x][y] = 1;
	cnt++;
	for (int i = 0; i < 4; i++)
	{
		int 	p = x + dx[i];
		int 	q = y + dy[i];
		if (p >= 0 && p < n && q >= 0 &&  q < m && s[p][q] == '.')
		{
			if (!vis[p][q]) dfs(p, q);

		}
	}
}



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	n = Int, m = Int, k = Int;

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	int sx = -1, sy = -1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (s[i][j] == '.') {
				sx = i, sy = j;
				mx++;
			}
		}
	}

	dfs(sx, sy);
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (s[i][j] == '.') {
				if (vis[i][j] == 0)
				{
					s[i][j] = 'X';
				}
			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		cout<< s[i] <<endl;
	}



	return 0;
}


