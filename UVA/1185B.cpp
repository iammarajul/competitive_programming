
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

	int n = Int;

	while (n--)
	{
		string a, b;
		cin >> a >> b;
		std::vector<pair<char, int>> v, v2;
		for (int i = 0; a[i]; i++)
		{
			int j, cnt = 0;
			for (j = i; j<(int)a.size(); j++)
			{
				if (a[i] != a[j]) break;
				else cnt++;
			}

			v.pb({a[i], cnt});
			i = j - 1;
		}
		for (int i = 0; b[i]; i++)
		{
			int j, cnt = 0;
			for (j = i; j<(int)b.size(); j++)
			{
				if (b[i] != b[j]) break;
				else cnt++;
			}

			v2.pb({b[i], cnt});
			i = j - 1;
		}
		int p = 0;
		if (v.size() != v2.size()) {puts("NO");}
		else {
			for (int i = 0; i < (int)v.size(); i++)
			{
				if ((v[i].first != v2[i].first) || (v[i].second > v2[i].second)) {puts("NO");p = 1; break; }
			}
			if (!p) puts("YES");
		}


	}

	return 0;
}


