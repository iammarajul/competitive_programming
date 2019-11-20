
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







int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);\

	int tes = Int;

	while (tes--)
	{
		ll n = LL, d = LL;
		if (d % 2 == 0) {

			if (d % 10 == 0) {cout << 0 << endl;}
			else {

				std::vector<ll> vp;
				int cnt = 0;
				for (ll i = d; 1; i += d)
				{
					vp.pb(i % 10);
					cnt++;
					if (cnt == 5) break;
					
				}
				ll sum = 0;
				ll sk = n / d;
				//cout<<sk<<endl;

				ll ans = (sk /5) * 20LL;

				for (int i = 0; i < sk % 5; i++) ans += vp[i];

				cout << ans << endl;




			}


		}
		else
		{
			if (d % 10 == 5)
			{
				ll sk=n/d;

				cout<<(sk/2)*5LL+( sk%2)*5<<endl;
			}
			else
			{
				std::vector<ll> vp;
				int cnt = 0;
				for (ll i = d; 1; i += d)
				{
					vp.pb(i % 10);
					cnt++;
					if (cnt == 10) break;
					
				}
				ll sum = 0;
				ll sk = n / d;
				//cout<<sk<<endl;

				ll ans = (sk /10) * 45LL;

				for (int i = 0; i < sk % 10; i++) ans += vp[i];

				cout << ans << endl;

			}
		}
	}

	return 0;
}


