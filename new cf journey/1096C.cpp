
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
	int tes = Int;

	while (tes--)
	{
		int n = Int;
		int xmax = 100000, xmin = -100000;
		int ymax = 100000, ymin = -100000;

		while (n--)
		{
			int x, y, a, b, c, d;
			cin >> x >> y >> a >> b >> c >> d;
			if (a == 0) xmin = max(xmin, x);
			if (b == 0) ymax = min(ymax, y);
			if (c == 0) xmax = min(xmax, x);
			if (d == 0) ymin = max(ymin, y);

		}
		if (xmin <= xmax && ymin <= ymax)
		{
			cout << 1 << " " << xmax << " " << ymax << endl;
		}
		else cout << 0 << endl;
	}



	return 0;
}


