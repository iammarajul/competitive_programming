
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

	int tes = Int;
	while (tes--)
	{

		int n = Int; int k = Int;
		std::vector<ll > v[k + 1];
		ll mx = -100000000000;
		for (int i = 1; i <= n; i++) {
			ll x = LL;
			//mx = max((ll)x, mx);
			int dx = i % k;

			int pk = v[dx].size();

			if (pk)
			{

				v[dx].pb((ll)(v[dx][v[dx].size() - 1] + x));


			}
			else
			{
				v[dx].pb((ll)x);

			}
		}




		ll final = mx;
		//cout<<final;
		for (int i = 0; i < k; i++)
		{

			int dd = v[i].size();
			if (dd) {
				dd--;
				ll mx2 = v[i][dd];
				for (int j = 0; j < dd; j++)
				{
					ll dis = v[i][dd] - v[i][j];
					mx2 = max(dis, mx2);
					//cout<<mx2<<" ";
				}
				//cout<<endl;
				final = max(final, mx2);
			}
		}

		printf("%lld\n", final);

	}



	return 0;
}


