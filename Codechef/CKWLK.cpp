
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
		ll n = LL;
		int k=n;
		int cnt1 = 0, cnt2 = 0;
		while (n % 10 == 0)
		{
			n = n / 10;
			cnt1++;
		}
		// cout<<n<<endl;
		// cout<<log2(n)<<endl;
		//cout<<cnt1<<endl;
		if( (powl(2,(int)log2(n))==n) && cnt1>=log2(n) )puts("Yes");
		else puts("No");

	}
	return 0;
}


