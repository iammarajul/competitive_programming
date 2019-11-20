

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
#define  MAX              100007;







int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n, a, b;
	cin >> n >> a >> b;

	string s;
	cin >> s;
	std::vector<int> v;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] == '*' || i == s.size() - 1)
		{
			if (s[i] != '*') cnt++;
			v.pb(cnt);
			cnt = 0;
		}
		else cnt++;
	}
	int ans=0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
		{
			int mi=min(a,b);
			mi=mi*2;
			if(mi==v[i]) 
			{
				ans+=mi*2;
				a=max(a,b)-min(a,b);
				b=0;
			}
			else if(mi>v[i])
			{
				ans+=v[i];
				a-=v[i]/2;
				b-=v[i]/2;
			}
		}
		else
		{

		}
	}

	return 0;
}


