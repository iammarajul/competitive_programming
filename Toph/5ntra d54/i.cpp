
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




map<string, int>mp;


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	getline(cin, s);
	int len = s.size();
	string er = "";
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == ' ') {mp[er]++; er = "";}
		else er.pb(s[i]);
		if (i == len - 1) mp[er]++;
	}
	map<string, int>::iterator it;
	int cnt = 0;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		if (it->second == 1) cnt++;
	}

	cout << cnt << endl;
	return 0;
}


