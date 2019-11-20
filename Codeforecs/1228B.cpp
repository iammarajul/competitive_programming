
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




int mat[1003][1003];
int val[1003][1003];


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	int h = Int;

	int w = Int;

	int r[h + 1], c[h + 1];

	For(h) r[i] = Int;
	For(w) c[i] = Int;

	for (int i = 0; i < h; i++)
	{
		for (int j = r[i] + 1; j < w; j++) mat[i][j] += 1;
	}
	for (int i = 0; i < w; i++)
	{
		for (int j = c[i] + 1; j < h; j++) mat[j][i] += 1;
	}
	int cnt = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (mat[i][j] == 2) cnt++;
		}
	}
	if (cnt == 0) {

		int pp=1;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<r[i];j++)
			{
				if(i<r[j] || i>r[j]) {}
				else {pp=0;break;}
			}
		}
		for(int i=0;i<w;i++)
		{
			for(int j=0;j<c[i];j++)
			{
				if(j<c[j] || j>c[j]) {}
				else {pp=0;break;}
			}
		}

		if (pp == 1) cout << 1 << endl;
		else cout << 0 << endl;
		return 0;




	}

	ll ans = 1;
	for (int i = 1; i <= cnt; i++)
	{
		ans = (ans * 2LL) % 1000000007;
	}



	cout << ans << endl;




	return 0;
}


