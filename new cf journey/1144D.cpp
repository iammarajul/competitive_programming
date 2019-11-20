
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





std::map<int, int> mp;
std::map<int, int>::iterator it;

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	int arr[n + 1];

	std::vector<pair<int, pair<int, int>> > v;

	For(n)
	{
		arr[i] = Int;
		mp[arr[i]]++;
	}
	int mx = 0; int ans = 1;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		if (it->second > mx)
		{
			mx = it ->second;
			ans = it -> first;
		}
	}

	std::vector<int> ch;

	for (int i = 0; i < n; i++) if (arr[i] == ans) ch.pb(i);

	for (int i = ch[0] - 1; i >= 0; i--)
	{
		if (arr[i] > ans )
		{
			v.pb({2, {i + 1, i + 2}});
		}
		else
		{
			v.pb({1, {i + 1, i + 2}});
		}

	}

	for (int i = 0; i < ch.size() - 1; i++)
	{
		int ss = ch[i + 1];
		for (int j = ch[i] + 1; j < ss; j++)
		{
			if (arr[j] > ans )
			{
				v.pb({2, {j + 1, j}});
			}
			else
			{
				v.pb({1, {j + 1, j}});
			}
		}
	}

	int xxx=ch[ch.size()-1];

	for(int i=xxx+1;i<n;i++)
	{
		if (arr[i] > ans )
		{
			v.pb({2, {i +1, i }});
		}
		else
		{
			v.pb({1, {i + 1, i }});
		}
	}



	cout << v.size() << endl;

	for(int i=0;i<v.size();i++)
	cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;



	return 0;
}


