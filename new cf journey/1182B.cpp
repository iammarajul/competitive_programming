
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








int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	int n = Int, m = Int;

	string s[n + 1];

	For(n) cin >> s[i];
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (s[i][j] == '*') ans++;
		}
	}

	for (int iii = 0; iii < n; iii++)
	{
		for (int jjj = 0; jjj < m; jjj++)
		{
			int midx = iii, midy = jjj;

			if (s[midx][midy] == '*') {
				

				int x = midx, y = midy;
				int cnt1 = -1, cnt2 = -1, cnt3 = -1, cnt4 = -1;
				while (x <= n - 1)
				{
					if (s[x][y] != '*') break;
					else
					{
						cnt1++;
					}
					x++;
				}
				x = midx, y = midy;

				while (x >= 0)
				{
					if (s[x][y] != '*') break;
					else
					{
						cnt2++;
					}
					x--;
				}
				x = midx, y = midy;

				while (y <= m - 1)
				{
					if (s[x][y] != '*') break;
					else
					{
						cnt3++;
					}
					y++;
				}
				x = midx, y = midy;

				while (y >= 0)
				{
					if (s[x][y] != '*') break;
					else
					{
						cnt4++;
					}

					y--;
				}
				
				if (cnt1 && cnt2 && cnt3 && cnt4 && cnt1+cnt2+cnt3+cnt4+1==ans) {puts("YES"); return 0;}
			}
		}
	}

	puts("NO");



	return 0;








	return 0;
}


