
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

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int bfs(string s[22], int sx, int sy, int x, int y)
{
	int vis[x + 1][y + 1];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			vis[i][j] = 0;
		}
	}
	//cout<<"c"<<endl;

	queue < pair<int, int> >qu;

	qu.push({sx, sy});
	vis[sx][sy] = 1;

	while (!qu.empty())
	{
		int topx = qu.front().first;
		int topy = qu.front().second;
		qu.pop();
		for (int i = 0; i <= 3; i++)
		{
			int px = topx + dx[i];
			int py = topy + dy[i];
			if ((px >= 0 && px < x) && (py >= 0 && py < y))
			{
				if (vis[px][py] == 0) {
					if (s[px][py] != '#') {
						vis[px][py] = 1;
						qu.push({px, py});
					}
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (vis[i][j] == 1) ans++;
		}
	}

	return ans;

}



int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int te = Int;
	for (int tes = 1; tes <= te; tes++) {
		int n = Int, m = Int;

		string s[m + 1];

		for (int i = 0; i < m; i++)
		{
			cin >> s[i];
		}
		int sx, sy;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (s[i][j] == '@') {
					sx = i, sy = j;
					break;
				}
			}
		}
		printf("Case %d: ", tes);
		cout << bfs(s, sx, sy, m, n) << endl;
	}
	return 0;
}


