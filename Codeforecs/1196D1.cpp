
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



int res(string s)
{
	int x = 0, y = 0, z = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 3 == 0)
		{
			if (s[i] != 'R') x++;
		}
		else if (i % 3 == 1)
		{
			if (s[i] != 'G') x++;
		}
		else
		{
			if (s[i] != 'B') x++;
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 3 == 0)
		{
			if (s[i] != 'G') y++;
		}
		else if (i % 3 == 1)
		{
			if (s[i] != 'B') y++;
		}
		else
		{
			if (s[i] != 'R') y++;
		}
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (i % 3 == 0)
		{
			if (s[i] != 'B') z++;
		}
		else if (i % 3 == 1)
		{
			if (s[i] != 'R') z++;
		}
		else
		{
			if (s[i] != 'G') z++;
		}
	}
	//cout<<s<<endl;
	//cout<<x<<y<<z<<endl;
	return min({x, y, z});


}




int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int tes = Int;
	while (tes--) {
		int n = Int, k = Int;

		string s;
		cin >> s;
		int ans = 999999999;
		for (int i = 0; i <= ((int)s.size()) - k; i++)
		{
			string pk = "";
			for (int j = i; j < i + k; j++)
			{
				pk.pb(s[j]);

			}
			///cout<<res(pk)<<endl;
			ans = min(ans, res(pk));
		}

		cout << ans << endl;
	}

	return 0;
}


