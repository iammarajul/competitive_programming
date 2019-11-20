
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

const int N = 300007;

vector<int > adj[N];
int x, y, n;
int vis[N];
int cnt1[N];
int bfs(int n)
{
	vis[n] = 1;
	int cnt = 0;
	for (int i = 0; i < adj[n].size(); i++)
	{
		if (!vis[adj[n][i]])
			cnt += bfs(adj[n][i]);
	}
	cnt1[n] = cnt;
	return ++cnt;

}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	n = Int;
	x = Int, y = Int;
	for (int i = 0; i < n - 1; i++)
	{
		int u, v;
		u = Int, v = Int;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	int kofr = bfs(x);
	//For1(n) cout<<cnt1[i]<<" ";
	//cout<<endl;
	int yyy = cnt1[y] + 1;
	memset(vis, 0,  sizeof(vis));
	memset(cnt1, 0, sizeof(cnt1));
	int korde = bfs(y);
	//For1(n) cout<<cnt1[i]<<" ";
	int xxx = cnt1[x] + 1;
	//cout<<xxx<<" "<<yyy<<endl;
	cout << (ll) (((ll)n * (ll)(n - 1))) - (ll) ((ll)xxx * (ll)yyy) << endl;
	return 0;
}


