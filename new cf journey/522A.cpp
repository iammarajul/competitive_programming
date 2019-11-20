
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






map<string ,int> mp;
map<string ,int> ::iterator it;
std::vector<int> adj[202];
int vis[202], leb[202];

int bfs()
{

	vis[1]=1;
	leb[1] =1;
 
	queue<int>qu;
	qu.push(1);int ans=1;
	while (!qu.empty())
	{
		int top=qu.front();
		qu.pop();
		


		for (int i = 0; i < adj[top].size();i++)
		{
			if(!vis[adj[top][i]])
			{
				vis[adj[top][i]] = 1;
				leb[adj[top][i]] = leb[top]+1;
				ans=max(ans,leb[adj[top][i]]);
				qu.push(adj[top][i]);


			}
		}

	}

	return ans;
}

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	mp["polycarp"] = 1;
	int n = Int;
	int cnt = 2;
	for (int i = 0; i < n; i++)
	{
		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;

		for(int i=0;s1[i];i++) if(s1[i]>='A' && s1[i]<='Z') s1[i]+=32;
		for(int i=0;s3[i];i++) if(s3[i]>='A' && s3[i]<='Z') s3[i]+=32;
		if (mp[s1] == 0) mp[s1] = cnt++;

		adj[mp[s3]].pb(mp[s1]);
		adj[mp[s1]].pb(mp[s3]);



	}


	cout<<bfs()<<endl;




	return 0;
}


