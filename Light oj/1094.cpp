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

int bfs( vector < pair < int, int> > adj[30002], int n)
{
	int leb[30002];
	int vis[30002];
	memset(leb, 0, sizeof(leb));
	memset(vis, 0, sizeof(vis));

	queue< int > qu;

	qu.push(0);
	leb[0] = 0;
	vis[0] = 1;
	while (!qu.empty())
	{
		int x = qu.front();

		qu.pop();

		for (int i = 0; i < adj[x].size(); i++)
		{
			if (!vis[ adj[x][i].first]) {
				leb[ adj[x][i].first ] = leb[x] + adj[x][i].second;
				vis[ adj[x][i].first ] = 1;
				qu.push(adj[x][i].first);
			}
		}
	}

	int index = 0, ma = 0;
	for (int i = 0; i < n; i++)
	{
		if (leb[i] > ma)
		{
			index = i;
			ma = leb[i];
		}
	}

	return  index;
}

int bfs2( vector < pair < int, int> > adj[30002], int n, int ind)
{
	int leb[30002];
	int vis[30002];
	memset(leb, 0, sizeof(leb));
	memset(vis, 0, sizeof(vis));

	queue< int > qu;

	qu.push(ind);
	leb[ind] = 0;
	vis[ind] = 1;
	while (!qu.empty())
	{
		int x = qu.front();

		qu.pop();

		for (int i = 0; i < adj[x].size(); i++)
		{
			if (!vis[ adj[x][i].first]) {
				leb[ adj[x][i].first ] = leb[x] + adj[x][i].second;
				vis[ adj[x][i].first ] = 1;
				qu.push(adj[x][i].first);
			}
		}
	}

	int ma = 0;
	for (int i = 0; i < n; i++)
	{
		ma = max(leb[i], ma);
	}

	return  ma;
}




int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int tes = Int;

	for (int te = 1; te <= tes; te++)
	{

		int n = Int;

		std::vector< pair<int, int> > v[n + 1];

		for (int i = 0; i < n - 1; i++)
		{
			int a = Int, b = Int, c = Int;

			v[a].pb({b, c});
			v[b].pb({a, c});
		}

		int ccc = bfs(v, n) ;

		printf("Case %d: %d\n", te, bfs2(v, n, ccc));
	}





	return 0;
}


