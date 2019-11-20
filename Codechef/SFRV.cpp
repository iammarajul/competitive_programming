
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
	int te = Int;

	while (te--)
	{
		ll n = Int;

		ll arr[n + 1];

		for (int i = 1; i <= n; i++) arr[i] = LL;

		for (int i = 1; i < n;)
		{
			if (i == n - 1)
			{
				if((arr[i]*(i+1) + arr[i+1]*i) > (arr[i]*i + arr[i+1]*(i+1))) swap(arr[i],arr[i+1]);
				i++;
			}
			else {
				ll dif1 = (arr[i] * (i + 1) + arr[i + 1] * i) - (arr[i] * i + arr[i + 1] * (i + 1));
				ll dif2 = (arr[i + 1] * (i + 2 ) +  arr[i + 2] * (i + 1)) - (arr[i + 1] * (i + 1) + arr[i + 2] * (i + 2));
				if (dif1 > dif2)
				{
					swap(arr[i], arr[i + 1]);
					i += 2;
				}
				else
				{
					i++;
				}
			}


		}
		ll ans = 0;
		for (int i = 1; i <= n; i++)
		{
			//cout << arr[i] << " ";
			ans += arr[i] * (ll)i;
		}
		cout << ans << endl;

	}


	return 0;
}


