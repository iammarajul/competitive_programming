
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

std::vector<int> adj[2002];
std::vector<int> par;

int vis[2002];
int leb[2002];
int bfs(int n, int st)
{
	vis[st] = 1;
	queue< int > qu;
	leb[st] = 1;
	qu.push(st);
	int max=1;

	while (!qu.empty())
	{
		int x = qu.front();
		qu.pop();

		for(int i=0;i<adj[x].size();i++)
		{
			if(!vis[adj[x][i]])
			{
				vis[adj[x][i]]=1;
				qu.push(adj[x][i]);
				leb[adj[x][i]]=leb[x]+1;
				max=leb[adj[x][i]];
			}
		}
	}

	return max;

}




int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;


	for (int i = 1; i <= n; i++)
	{
		int x = Int;
		if (x == -1) par.pb(i);
		else
		{
			adj[i].pb(x);
			adj[x].pb(i);
		}
	}

	/*for(int i=1;i<=n;i++)
	{
		for(int j=0;j<adj[i].size();j++) cout<<adj[i][j]<<" ";
		cout<<endl;
	}*/
	
	int ans = 0;
	for (int i = 0; i < par.size(); i++)
	{
		ans=max(ans, bfs(n,par[i]));
	}

	cout<<ans<<endl;


	return 0;
}


