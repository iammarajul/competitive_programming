
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

int dx[] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[] = {1, -1, 2, -2, 2, -1, 1, -1};

int leb[101][11][11];
int cnt;
void ins()
{
	cnt = 0;
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			for (int k = 0; k < 11; k++)
			{
				leb[i] [j] [k] = -1;
			}
		}
	}
}
void bfs(int x, int y, int bx, int by)
{
	int vis[11][11];



	for (int i = 0; i < bx; i++)
	{
		for (int j = 0; j < by; j++)
		{
			vis[i][j] = 0;
		}

	}
	vis[x][y] = 1;
	leb[cnt][x][y] = 0;
	queue<pair<int, int>>qu;
	qu.push({x, y});

	while (!qu.empty())
	{
		int a = qu.front().first;
		int b = qu.front().second;
		qu.pop();

		for (int i = 0; i < 8; i++)
		{
			int vx = a + dx[i];
			int vy = b + dy[i];
			if ((vx >= 0 && vx < bx) && (vy >= 0 && vy < by))
			{
				if (vis[vx][vy] == 0) {
					vis[vx][vy] = 1;
					leb[cnt][vx][vy] = leb[cnt][a][b] + 1;
					qu.push({vx, vy});
				}

			}
		}
	}
	/*for(int i=0;i<bx;i++)
	{
		for(int j=0;j<by;j++)
		{
			cout<<vis[i][j]<<" ";
		}
		cout<<"\n";

	}
	cout<<"\n";*/




	cnt++;

}




int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int te = Int;
	for (int tes = 1; tes <= te; tes++) {

		ins();

		int n = Int, m = Int;

		string s[n + 1];

		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
		}
		std::vector<int> nb;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (s[i][j] != '.')
				{
					int vv = s[i][j] - '0';
					nb.pb(vv);

					bfs(i, j, n, m);
				}
			}
		}
		int jjj = 999999999;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int ans = 0,ju=1;
				for (int k = 0; k < cnt; k++)
				{
					//cout<<leb[k][i][j]<<" ";
					if (leb[k][i][j] == -1) {ju=0;break;}
					else
					{
						int vvv = leb[k][i][j] / nb[k];
						if (leb[k][i][j] % nb[k]) vvv++;
						ans += vvv;
					}


				}
				//cout<<endl;

				if(ju==1) jjj = min(jjj, ans);
			}

		}

		//cout<<jjj<<endl;
		printf("Case %d: ", tes);
		if (jjj==999999999) cout << -1 << endl;
		else
			cout << jjj << endl;

	}





	return 0;
}


