
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




int cacl(int n)
{
	int ans = 0;
	int cnt = 1;
	while (1)
	{
		int kk =n/ (int)(powl(5, cnt++));
		ans += kk;
		if (kk <= 0) break;
	}
	return ans;
}


int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int tes = Int;
	int cas=1;

	while (tes--)
	{
		int n = Int;
		int lo = 1;
		int hi = 1e9;
		int ans;
		int p = 0;
		while (lo <= hi)
		{
			int mid = (lo + hi) / 2;
			int xa = cacl(mid);
			// cout<<mid<<" "<<xa<<endl;
			if (xa == n)
			{
				p = 1;
				ans = mid;
				hi=mid-1;
			}
			else if (xa < n)
			{
				lo = mid + 1;
			}
			else
			{
				hi = mid - 1;
			}


		}

		printf("Case %d: ",cas++ );

		if (p == 1) cout << ans << endl;
		else cout << "impossible" << endl;
	}


	return 0;
}


