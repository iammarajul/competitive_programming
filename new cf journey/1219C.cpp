
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

	int l = Int;
	string s;
	cin >> s;

	int len = s.size();
	if (len % l != 0)
	{
		for (int i = 1; i <= ((len / l) + 1)*l; i++)
		{
			if (i % l == 1) cout << 1;
			else cout << 0;
		}
	}
	else
	{
		int cnt = 0;
		for (int i = 0; i < len; i++)
		{
			if (s[i] == '9') cnt++;
		}
		if (cnt == len)
		{
			for (int i = 1; i <= len + l; i++)
			{
				if (i % l == 1) cout << 1;
				else cout << 0;
			}
		}
		else
		{
			int pk = 0;
			int x = 0;
			for (int i = l - 1; i >= 0; i--)
			{
				if (s[i] == '9') pk++;
			}
			if (pk == l)
			{
				for (int i = 0; i < len; i++) cout << 9;
			}
			else
			{
				int sm = 0, eq = 0, ptt = 1;
				for (int i = l; i < len; i++)
				{
					if (s[i] < s[i % l]) sm++;
					else if (s[i] == s[i % l]) eq++;
					else {ptt = 0; break;}
				}



				if (ptt == 0 || sm==0) {
					for (int i = l - 1; i >= 0; i--)
					{
						if (s[i] != '9') {s[i]++; break;}
					}
				}
				int dl = len / l;
				while (dl--)
				{
					for (int i = 0; i < l; i++) cout << s[i];
				}

			}
		}
	}

	return 0;
}


