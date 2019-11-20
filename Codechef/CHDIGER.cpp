
#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}

long long POW(long long a, long long b) {
	if (b == 0)
		return 1;
	long long res = POW(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}


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
#define  MAX              100007;

std::vector<ll> ans;

void find(std::vector<ll> v, int st, ll cnt, ll k)
{


	for (int j = st; j < v.size(); j++)
	{
		ll nb = 0; ll pk = cnt - 1;
		for (int i = st; i <= j; i++)
		{
			nb += (v[i]) * (POW(10, pk));
			pk--;
		}
		while (pk != -1)
		{
			nb += k * POW(10, pk);
			pk--;
		}

		ans.pb(nb);
	}

}



int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int te = Int;

	while (te--)
	{
		ll n = LL, k = LL;

		std::vector<ll> v;
		ans.erase(ans.begin(), ans.end());
		ll c = n;
		ll cnt = 0;
		while (c > 0)
		{
			ll p = c % 10;
			if (p < k) v.pb(p);
			c = c / 10;
			cnt++;
		}
		reverse(v.begin(), v.end());

		for (int j = 0; j < v.size(); j++) {
			ll mn = 99;int index=0;
			for (int i =j; i < v.size(); i++)
			{
				mn = min(mn, v[i]);
			}
			for(int i=j;i<v.size();i++)
			{
				if(v[i]==mn) 
				{
					ans.pb(mn);
					index=i;
				}
			}
			j=index;
		}


		if (v.size() == 0) {
			for (int i = 0; i < cnt; i++) cout << k ;

			cout << endl;
		}
		else {
			

			for(int i=0;i<ans.size();i++) cout<<ans[i];
			for(int i=1;i<=cnt-ans.size();i++) cout<<k;
			cout<<endl;
		}


	}



	return 0;
}


