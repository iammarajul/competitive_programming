
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







int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tes = Int;
	while (tes--)
	{
		int n = Int;
		string s[n + 1];

		For(n) cin >> s[i];
		int z = 0, o = 0;
		int p = 1;
		for (int i = 0; i < n; i++)
		{
			if (s[i].size() % 2 != 0)
			{
				p = 0;
			}
			else
			{
				for (int j = 0; j < s[i].size(); j++)
				{
					if (s[i][j] == '1') o++;
					else z++;
				}
			}
		}

		if (p == 0)
		{
			cout << n << endl;

		} 
		else
		{
			if (o % 2 == 0 && z % 2 == 0) cout << n << endl;
			else cout << n - 1 << endl;
		}



	}

	return 0;
}


