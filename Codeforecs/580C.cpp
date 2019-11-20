
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




std::vector<int> v[100002];


int ans, cnt , m , arr[100002] , n;
bool vis[100002];

void dfs(int n) {

	vis[n] = 1;
	//cout<<n<<endl;
	
	if (arr[n] == 1) cnt++;
	if (arr[n] == 0)
	{
		if (cnt <= m) {
			cnt = 0;
		}
	}
	int temp=cnt;


	if (v[n].size() == 1 && n != 1)
	{
		if (cnt <= m) ans++;

		cnt=0;
	}
	for (int i = 0; i < v[n].size(); i++)
	{
		if (!vis[v[n][i]])
		{
			
			dfs(v[n][i]);
			//vis[v[n][i]] = 1;
			cnt = temp;
		}
	}
}




int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	n = Int, m = Int;

	for(int i=1;i<=n;i++) arr[i] = Int;

	for (int i = 1 ; i <= n - 1 ; i++ )
	{
		int a = Int, b = Int;
		v[a].pb(b);
		v[b].pb(a);

	}

	/*for(int i=1;i<n;i++)
	{
		cout<<i<<"->";
		for(int u=0;u<v[i].size();u++) cout<<v[i][u]<<" ";
		cout<<endl;
	}*/
	dfs(1);

	cout << ans << endl;


	return 0;
}


