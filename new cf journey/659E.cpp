
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






std::vector<int> adj[100005];
int vis[100005];

map<pair<int,int>, int>mp;

int no=1, e;


void dfs(int s) {
	vis[s] = 1;
	for (int i = 0 ; i < (int)adj[s].size() ; i++) {
		int u = adj[s][i] ;
		int aa=min(s,u);
		int bb=max(s,u);
		if(!mp[{aa,bb}]) {e++;mp[{aa,bb}]=1;}
		if (!vis[adj[s][i]]){
			dfs(u);
			no++;
		}
	}
}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;
	int m = Int;

	for (int i = 0 ; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}

	int ans=0;
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			no=1,e=0;
			dfs(i);
			if(e<no) ans++;
		}
	}
	cout<<ans<<endl;



	return 0;
}


