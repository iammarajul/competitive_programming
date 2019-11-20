
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




bool cmp(const pair<int, int>&A, const pair<int , int >&B)
{
	if (A.second > B.second) return 0;
	if (A.second < B.second) return 1;


}



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int num = Int;


	std::vector<pair<int, int>>  p, n, ans;
	vector<int>v;
	int mi = 0;

	For(num)
	{
		int x = Int;
		if (x >= 0) x = -x - 1;
		n.pb({x, i});

		if (x == -1) mi++;
		v.pb(x);

	}

	//int z1 = z.size();

	int n1 = n.size();
	int v1 = v.size();
	//cout<<n1<<endl;
	if (mi == num && num%2!=0) For(num) cout << 0 << " ";
	else
	{
		if (num % 2 == 0) For(num) cout << n[i].first << " ";
		else
		{
			sort(n.begin(), n.end());
			int tu = 1;

			for (int i = 0; i < num; i++)
			{
				if (tu && n[i].first != -1) {
					ans.pb({ -n[i].first - 1, n[i].second});
					tu = 0;

				} else ans.pb({n[i].first, n[i].second});

			}
			sort(ans.begin(), ans.end(), cmp);
			For(num) cout << ans[i].first << " ";
		}




		
	}return 0;
}

