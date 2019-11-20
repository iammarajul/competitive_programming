
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

int leb[10002];
int vis[10002];

int bfs(int st, int n, std::vector<int> adj[10002])
{
	memset(leb, 0, sizeof(leb));
	memset(vis, 0, sizeof(vis));

	queue<int> qu;
	qu.push(st);
	leb[st] = 0;
	vis[st] = 1;
	int b;
	while (!qu.empty())
	{
		int x = qu.front();
		qu.pop();

		for (int i = 0; i < adj[x].size(); i++)
		{
			if (!vis[adj[x][i]])
			{
				vis[adj[x][i]] = 1;
				leb[adj[x][i]] = leb[x] + 1;
				b = adj[x][i];
				qu.push(adj[x][i]);
			}
		}
	}

	return b;


}

int bfs2(int st, int n, std::vector<int> adj[10002])
{
	memset(leb, 0, sizeof(leb));
	memset(vis, 0, sizeof(vis));

	queue<int> qu;
	qu.push(st);
	leb[st] = 0;
	vis[st] = 1;
	int b;
	while (!qu.empty())
	{
		int x = qu.front();
		qu.pop();

		for (int i = 0; i < adj[x].size(); i++)
		{
			if (!vis[adj[x][i]])
			{
				vis[adj[x][i]] = 1;
				leb[adj[x][i]] = leb[x] + 1;
				b = leb[adj[x][i]];
				qu.push(adj[x][i]);
			}
		}
	}

	return b;


}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n = Int;
	std::vector<int> ajd[10005];
	for (int i = 2; i <= n; i++)
	{
		int u = Int, v = Int;
		ajd[u].pb(v);
		ajd[v].pb(u);

	}

	int sec = bfs(1, n, ajd);

	cout << bfs2(sec, n, ajd) << endl;

	return 0;
}


