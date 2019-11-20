
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


const int mod           = 1e9 + 7;
const int inf           = (int)2e9 + 5;
const ll  Inf           = (ll)1e18 + 5;
const int N             = 1e6 + 5;

inline int add(int a, int b) {a += b; return a >= mod ? a - mod : a;}
inline int sub(int a, int b) {a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b) {return (ll)a * b % mod;}



std::vector<int> adj[N];
int val[N][3];
int vis[N][3];
std::vector<int> ans;

int solve() {

	// memset(vis, -1, sizeof(vis));


	int n = Int;

	for (int i = 1; i <= n-2; i++)
	{
		cin >> val[i][0] >> val[i][1] >> val[i][2];

		adj[val[i][0]].pb(i);
		adj[val[i][1]].pb(i);
		adj[val[i][2]].pb(i);
	}
	int ins;
	for (int i = 1; i <= n; i++)
	{
		if (adj[i].size() == 1) {
			ins = i;
			break;
		}
	}

	ans.pb(ins);
	int x = adj[ins][0];
	vis[ins][0] = 1;
	for (int i = 0; i < 3; i++)
	{
		if (adj[val[x][i]].size() == 2) {
			ans.pb(val[x][i]);
			if (adj[val[x][i]][0] == x) vis[val[x][i]][0] = 1;
			else vis[val[x][i]][1] = 1;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (adj[val[x][i]].size() == 3) {
			ans.pb(val[x][i]);

			if (adj[val[x][i]][0] == x) vis[val[x][i]][0] = 1;
			else if (adj[val[x][i]][1] == x) vis[val[x][i]][1] = 1;
			else  vis[val[x][i]][2] = 1;
		}
	}

	for (int i = 1; i < n - 2; i++)
	{
		int x = ans[i];
		int sz = adj[x].size();
		for (int j = 0; j < sz; j++)
		{
			if (vis[x][j] == 0)
			{
				int pk = adj[x][j];
				vis[x][j] = 1;
				for (int k = 0; k < 3; k++) {
					if (val[pk][k] != ans[i] && val[pk][k] != ans[i + 1]) {
						ans.pb(val[pk][k]);
						for (int k2 = 0; k2 < 3; k2++)
						{
							if(adj[ans[i+1]][k2]==pk) vis[ans[i+1]][k2]=1;
							if(adj[val[pk][k]][k2]==pk) vis[val[pk][k]][k2]=1;	
						}
					}
				}
			}
		}
	}

	For(n) cout<<ans[i]<<" ";



	return 0;
}




int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test = 1, tc = 0;
	//scanf("%d", &test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}

	return 0;




}


