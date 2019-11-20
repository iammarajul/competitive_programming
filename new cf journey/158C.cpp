
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
	std::vector<string> v;


	while (n--)
	{
		string a, s;
		cin >> a;

		if (a.compare("cd") == 0)
		{
			cin >> s;
			int len = s.size();
			if (s[0] == '/')
			{
				v.erase(v.begin(), v.end());
				string k = "/";
				for (int i = 1; i < len; i++)
				{
					if (s[i] == '/' || i == len - 1)
					{
						if (i == len - 1) k.pb(s[i]);
						if (k.compare("/..") == 0) v.pop_back();
						else v.pb(k);
						k = "";
					}
					k.pb(s[i]);

				}
			}
			else
			{
				string k = "/";
				for (int i = 0; i < len; i++)
				{
					if (s[i] == '/' || i == len - 1)
					{
						if (i == len - 1) k.pb(s[i]);
						if (k.compare("/..") == 0) v.pop_back();
						else v.pb(k);
						k = "";
					}
					k.pb(s[i]);

				}
			}

		}
		else
		{
			For(v.size()) cout << v[i];
			cout << "/";
			cout << endl;
		}
	}


	return 0;
}


