
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





int vis[55][55];
int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;
	string s[n + 1];

	for (int i = 0; i < n; i++) cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i][j] == '.')
			{
				if (!vis[i][j]) 
				{
					int ccc = 0;
					for (int k = 0; k < 4; k++)
					{
						int xx = i, yy = j;
						xx += dx[k];
						yy += dy[k];

						if ((xx >= 0 && xx < n) && (yy >= 0 && yy < n))
						{
							if (s[xx][yy] == '.' && vis[xx][yy]==0) ccc++;
						}
					}
					//cout<<ccc<<endl;
					if (ccc == 4)
					{
						vis[i][j]=1;
						for (int k = 0; k < 4; k++)
						{
							int xx = i, yy = j;
							xx += dx[k];
							yy += dy[k];
							if (!vis[xx][yy]) { vis[xx][yy] = 1;}

						}
						
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (s[i][j] == '.')
			{
				if (vis[i][j] == 0)
				{
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}

	cout << "YES" << endl;


	return 0;
}


