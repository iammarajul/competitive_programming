
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


int vis[10005];
std::vector<int>  adj[10004];
void dfs(int n)
{
	vis[n] = 1;
	for (int i = 0; i < adj[n].size(); i++)
	{
		if(!vis[adj[n][i]])
			dfs(adj[n][i]);
	}
}




int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n = Int;



	For1(n) {
		int x = Int;
		adj[x].pb(i);
		adj[i].pb(x);
	}
	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			dfs(i);
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}


