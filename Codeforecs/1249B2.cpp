
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
	//freopen("output.txt", "w", stdout);
	int tes = Int;

	while (tes--)
	{
		int n = Int;
		int arr[n + 1];
		int vis[n + 1];
		int ans[n + 1];
		memset(vis, 0, sizeof(vis));
		memset(ans, 0, sizeof(ans));

		For1(n) arr[i] = Int;

		for (int i = 1; i <= n; i++)
		{
			if (!vis[i]) {
				vis[i] = 1;
				int cnt = 0;
				int ck = arr[i];
				std::vector<int> ds;
				ds.pb(i);
				while (1)
				{
					vis[ck] = 1;

					if (ck == i) break;
					ds.pb(ck);
					ck = arr[ck];
					cnt++;
				}
				// cout << cnt << endl;
				// cout << ds[0] << endl;
				//v.pb(cnt + 1);

				for (int j = 0; j < ds.size(); j++)
				{
					ans[ds[j]] = cnt + 1;
				}
				// cout<<"f";
			}
		}

		for (int i = 1; i <= n; i++)
		{
			cout << ans[i];
			if (i != n) cout << " ";
		}
		cout<<endl;



	}
	return 0;
}


