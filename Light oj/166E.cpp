
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
#define  mod 			  1000000007







int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll n = LL;
	if (n == 1) cout << 0 << endl;
	else if (n == 2) cout << 3 << endl;
	else if (n == 3) cout << 6 << endl;
	else {
		ll p = 3, nod = 0; ll ans = 0;
		for (ll i = 2; i <= n - 2; i++)
		{
			ans = (p % mod * 3LL % mod) % mod;
			nod = ( (p%mod)- (nod%mod) + mod ) % mod;
			p = ans;
			//cout<<ans<<" "<<nod<<endl;
		}
		
		ll ans2 = ((ans  * 2LL )  % mod + nod % mod) % mod ;
		cout << ans2 << endl;
	}




	return 0;
}


