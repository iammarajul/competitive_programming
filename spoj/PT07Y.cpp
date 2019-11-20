
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

int vis[10009];
bool bfs(std::vector<int> adj[10008], int s, int n)
{
	queue< pair<int, int> >qu;
	qu.push({s, 0});
	vis[s] = 1;
	while (!qu.empty())
	{
		int x = qu.front().first;
		int y = qu.front().second;
		qu.pop();

		for (int i = 0; i < adj[x].size(); i++)
		{
			if (vis[adj[x][i]] == 1) {if (adj[x][i] != y) return 0;}
			else {
				vis[adj[x][i]] = 1;
				qu.push({adj[x][i], x});
			}
		}
	}
	return 1;
}




int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int, e = Int;

	std::vector<int> adj[n + 1];

	for (int i = 0; i < e; i++)
	{
		int u = Int, v = Int;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i]) {
			if (bfs(adj, i, n) == 0) {cout << "NO" << endl; return 0;}
		}
	}

	cout << "YES" << endl;



	return 0;
}


