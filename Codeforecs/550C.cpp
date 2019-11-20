
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

std::vector<int> v;
std::vector<int> dig;








int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	for (int i = 0; i <= 999; i++)
	{
		if (i % 8 == 0) v.pb(i);
	}


	string s;
	cin >> s;

	for (int i = 0; i < v.size() ; i++)
	{
		int x = v[i];

		std::vector<int> v2;
		if (x == 0) v2.pb(0);
		while (x > 0)
		{
			int p = x % 10;
			x /= 10;
			v2.pb(p);
		}
		int cnt = v2.size();
		reverse(v2.begin(), v2.end());
		if (cnt == 1)
		{
			int xx = v2[0];
			for (int j = 0; j < s.size(); j++)
			{
				if ((s[j] - '0') == xx) {
					cout << "YES" << endl << v[i] << endl;
					return 0;
				}
			}
		}
		else if (cnt == 2)
		{
			int xx = v2[0], yy = v2[1];
			int in1 = -1, in2 = -1;
			for (int j = 0; j < s.size(); j++)
			{
				if ((s[j] - '0') == xx) {
					in1 = j;
					break;
				}
			}
			for (int j = in1 + 1; j < s.size(); j++)
			{
				if ((s[j] - '0') == yy) {
					in2 = j;
					break;
				}
			}

			if (in1 != -1 && in2 != -1)
			{
				cout << "YES" << endl << v[i] << endl;
				return 0;
			}

		}
		else
		{
			//cout<<v[i]<<endl;
			int c1 = v2[0], c2 = v2[1], c3 = v2[2];
			int in1 = -1 , in2 = -1 , in3 = -1;

			for (int j = 0; j < s.size(); j++)
			{
				if ((s[j] - '0') == c1) {
					in1 = j;
					break;
				}
			}
			for (int j = in1 + 1; j < s.size(); j++)
			{
				if ((s[j] - '0') == c2) {
					in2 = j;
					break;
				}
			}
			for (int j = in2 + 1; j < s.size(); j++)
			{
				if ((s[j] - '0') == c3) {
					in3 = j;
					break;
				}
			}

			if (in1 != -1 && in2 != -1 && in3 != -1)
			{
				cout << "YES" << endl << v[i] << endl;
				return 0;
			}




		}


	}

	cout << "NO" << endl;


	return 0;
}


