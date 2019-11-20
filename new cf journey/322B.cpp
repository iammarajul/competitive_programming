
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



bool cmp(pair<ll , ll > a, pair<ll, ll > b)
{
	if (a.first > b.first) return 1;
	if (a.first < b.first) return 0;
	if (a.second < b.second) return 1;
	if (a.second > b.second) return 0;

}





int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	int n = Int, k = Int;

	int arr[n + 1];
	ll arr2[n + 1];

	For(n) {arr[i] = Int; arr2[i] = arr[i];}
	std::vector<pair<ll, ll> > v;

	if (k * 2 == n) {cout << 1 << " " << k + 1 << endl; return 0;}
	for (int i = 1; i < n; i++) arr2[i] += arr2[i - 1];

	for (int i = 0; i < n - k + 1; i++)
	{
		ll ans = arr2[i + k - 1] - (i != 0 ? arr2[i - 1] : 0);
		v.pb(make_pair(ans, i + 1));
	}

	sort(v.begin(), v.end(),cmp);

	
	ll x = v[0].second;

	for (int i = 1; i < (int)v.size(); i++)
	{
		ll y = v[i].second;
		if (y < x - k + 1 || y > x + k - 1 )
		{
			 cout << min(x, y) << " " << max(x, y) << endl;
			 return 0;
		}
	}



}