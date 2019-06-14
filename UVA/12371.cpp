
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
		int n = Int;
		string s[n + 1]; int a[n + 1], b[n + 1];
		for (int i = 0; i < n; i++)
		{
			cin >> s[i] >> a[i] >> b[i];
		}
		int q = Int;
		while (q--)
		{
			int cnt = 0;
			string ans;
			int x = Int;
			for (int i = 0; i < n; i++)
			{
				if (x >= a[i] && x <= b[i]) {
					cnt++;
					ans = s[i];
				}

			}
			if (cnt == 1)
			{
				cout << ans<<endl;
			}
			else
				cout << "UNDETERMINED" << endl;

		}
		if(tes) cout<<endl;
	}


	return 0;
}


