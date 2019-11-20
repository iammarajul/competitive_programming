
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

	int n = Int, k = Int;

	std::map<ll, int> mp;
	std::map<ll, int> mp2;

	ll arr[n + 1];

	For(n)
	{
		arr[i] = LL;
		mp[arr[i]]++;
	}

	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		ll x = (ll)arr[i];
		mp[x]--;
		ll x2 = (ll) x * k;
		ll x3 = (ll) x / (ll)k;
		if (!(x % (ll)k)) {

			ans += ((ll)mp[x2] * (ll)mp2[x3]);
		}
		mp2[x]++;


	}

	cout << ans << endl;


	return 0;
}


