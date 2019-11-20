
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
	int n = Int;
	int ans = 0;
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (int i = 0; i < n; i++)
	{
		ll x = LL;

		if (x < 0) {cnt1++; ans += ((-x) - 1);}
		else if (x == 0) {cnt2++; ans++;}
		else
		{
			ans += (x - 1);
		}
	}

	if(cnt1%2!=0)
	{
		if(cnt2!=0) cout<<ans<<endl;
		else cout<<ans+2<<endl;
	}
	else
	{
		cout<<ans<<endl;
	}

	return 0;
}


