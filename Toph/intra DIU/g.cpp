
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


int n, m, q;
int col[1006];
std::vector<int> adj[1006];
int vis[1005];
int dis[1005];


int bfs(int s, int k)
{
	queue<int>qu;
	qu.push(s);
	vis[s] = 1;
	dis[s] = 0;

	while (!qu.empty())
	{
		int top = qu.front();
		qu.pop();
		for (int i = 0; i < adj[top].size(); i++)
		{
			if (!vis[adj[top][i]]) {
				dis[adj[top][i]] = dis[top] + 1;
				vis[adj[top][i]] = 1;
				qu.push(adj[top][i]);
			}


		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (col[i] == 1 && dis[i] <= k) cnt++;
	}

	return cnt;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	n = Int, m = Int, q = Int;

	For1(n) col[i] = Int;

	for (int i = 0; i < m; i++)
	{
		int u = Int, v = Int;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	while (q--)
	{
		int s, k;
		cin >> s >> k;
		memset(vis, 0, sizeof(vis));
		memset(dis, 10000, sizeof(dis));
		cout << bfs(s, k) << endl;


	}



	return 0;
}


