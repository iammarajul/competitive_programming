
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



map< pair<pair<int, int>, pair<int, int>> , int >mp;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	std::vector<pair<int, int>> v, v2;
	for (int i = 0; i < n; i++)
	{

		int x = Int, y = Int;
		v.pb({x, y});
	}
	for (int i = 0; i < n - 1; i++)
	{
		mp[ {{v[i].first, v[i].second}, {v[i + 1].first, v[i+1].second}}]++;
	}


	int m = Int;
	for (int i = 0; i < m; i++)
	{
		int x = Int, y = Int;
		v2.pb({x, y});
	}
	for (int i = 0; i < m - 1; i++)
	{
		if(mp[ {{v2[i].first, v2[i].second}, {v2[i + 1].first, v2[i+1].second}}] == 1)
		{
			mp[ {{v2[i].first, v2[i].second}, {v2[i + 1].first, v2[i+1].second}}]++;
			// cout<<"C"<<endl;
		}
		else if(mp[ {{v2[i + 1].first, v2[i+1].second},{v2[i].first, v2[i].second} }] == 1)
		{
			mp[{{v2[i + 1].first, v2[i+1].second},{v2[i].first, v2[i].second}}]++;
		}
	}

	int cnt =0;
	int ans=0;
	for (int i = 0; i < n-1; i++)
	{
		if(mp[{{v[i].first, v[i].second}, {v[i + 1].first, v[i+1].second}}]==2) cnt++;
		else
		{
			if(cnt!=0) cnt++;
			ans=max(ans,cnt);
			cnt =0;
		}
		if(i==n-2){
			if(cnt!=0) cnt++;
			ans=max(ans,cnt);
		}
	}


	cout <<ans<< endl;






	return 0;
}


