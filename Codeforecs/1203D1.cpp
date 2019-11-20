
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



bool isSubSequence(string str1, string str2, int m, int n)
{
	// Base Cases
	if (m == 0) return true;
	if (n == 0) return false;

	// If last characters of two strings are matching
	if (str1[m - 1] == str2[n - 1])
		return isSubSequence(str1, str2, m - 1, n - 1);

	// If last characters are not matching
	return isSubSequence(str1, str2, m, n - 1);
}

string subs(string s, int m, int n)
{
	string hh = "";
	for (int i = 0; i < (int)(s.size()) ; i++)
	{
		if (i >= m && i <= n) {}
		else hh.pb(s[i]);
	}

	return hh;
}



int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s, t;
	cin >> s >> t;
	int sl = s.size();
	int ans = 0;
	for (int i = 0; i < sl; i++)
	{
		for (int j = i; j < sl; j++)
		{
			if (i != 0 || j != sl - 1) {
				string kk = subs(s, i, j);
				//cout << kk << endl;
				if (isSubSequence(t, kk, (int)t.size(), (int)kk.size()) == 1)
				{
					ans = max(ans, j - i + 1);
				}
			}

		}
	}

	cout << ans << endl;

	return 0;
}


