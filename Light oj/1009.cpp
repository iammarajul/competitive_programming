
#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}


long long POW(long long a, long long b) {
	if (b == 0)
		return 1;
	long long res = POW(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}

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

int cnt1, cnt2;
int vis[20007];
int leb[20007];
void bfs(std::vector<int> adj[20007], int x)
{



	int start = x;
	vis[start] = 1;
	cnt1 = 0, cnt2 = 0;
	cnt1++;
	queue<int>qu;
	qu.push(start);

	while (!qu.empty())
	{
		int b = qu.front();
		qu.pop();
		for (int i = 0; i < adj[b].size(); i++) {
			if (!vis[adj[b][i]])
			{
				vis[adj[b][i]] = 1;
				leb[adj[b][i]] = leb[b] + 1;
				if (leb[adj[b][i]] % 2 == 0) {cnt1++;}
				else {cnt2++;}
				qu.push(adj[b][i]);
			}
		}
	}
}





int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t = Int;
	for (int tes = 1; tes <= t; tes++) {
		memset(leb, 0, sizeof(leb));
		memset(vis, 0, sizeof(vis));

		int n = Int;

		std::vector<int> adj[20007];
		set<int>st;
		set<int>::iterator it;
		int x = Int, y = Int;
		adj[x].pb(y);
		adj[y].pb(x);
		st.insert(x);
		st.insert(y);

		for (int i = 1; i < n; i++) {
			int u = Int, v = Int;
			adj[u].pb(v);
			adj[v].pb(u);
			st.insert(u);
			st.insert(v);
		}
		int ans = 0;
		for (it = st.begin(); it != st.end(); ++it)
		{
			int node = *it;
			//cout<<node<<"fhf"<<endl;
			if (vis[node] == 0)
			{
				//cout<<"g"<<node<<endl;
				bfs(adj, node);
				ans += max(cnt1, cnt2);
			}
		}


		printf("Case %d: %d\n", tes, ans);

	}



	return 0;
}


