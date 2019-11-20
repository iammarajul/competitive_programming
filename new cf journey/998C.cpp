
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

	int n = Int, x = Int, y = Int;

	string s;
	cin >> s;

	if (y <= x)
	{
		int cnt = 0, res = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0') res++;
			else
			{
				if (res) cnt++;
				res = 0;
			}
			if (s[n - 1] == '0' && i == n - 1) cnt++;
		}

		cout << (ll)cnt*y << endl;
	}
	else
	{
		int cnt = 0, res = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0') res++;
			else
			{
				if (res) cnt++;
				res = 0;
			}
			if (s[n - 1] == '0' && i == n - 1) cnt++;
		}
		if (cnt == 1) cout << y << endl;
		else {
			int cnt2=0,res2=0;
			for (int i = 0; i < n; i++)
			{
				if (s[i] == '1') res2++;
				else
				{
					if (res2) cnt2++;
					res2 = 0;
				}
				if (s[n - 1] == '1' && i == n - 1) cnt2++;
			}
			if(s[0]=='1') cnt2--;
			if(s[n-1]=='1') cnt2--;

			//cout<<"  "<<cnt2<<endl;
			if(cnt)

			cout<<(ll)cnt2*x+y<<endl;
		else cout<<0<<endl;
		}
	}


	return 0;
}


