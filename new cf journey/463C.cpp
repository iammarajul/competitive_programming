
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

	int n = Int;

	int arr[n + 1][n + 1];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			arr[i][j] = Int;
		}
	}
	std::vector<ll> sum1;
	std::vector<ll> sum2;
	for (int j = 1; j <= n; j++)
	{
		int i = 1, jj = j;
		ll sum = 0, sum3 = 0;
		while (jj >= 1 && i <= n)
		{
			sum += (ll) arr[i][jj];
			jj--;
			i++;
		}

		sum1.pb(sum);

	}

	for (int j = 1; j <= n; j++)
	{
		int i = n, jj = j;
		ll sum = 0, sum3 = 0;
		while (jj <= n && i >= 1)
		{
			sum += (ll) arr[i][jj];
			jj++;
			i--;
		}

		if (j != 1) sum1.pb(sum);

	}

	for (int i = 0; i < n + n - 1; i++) cout << sum1[i] << " ";
	cout << endl;


	for (int j = n; j >= 1; j--)
	{
		int i = 1, jj = j;
		ll sum = 0, sum3 = 0;
		while (jj <= n  && i <= n)
		{
			sum += (ll) arr[i][jj];
			jj++;
			i++;
		}
		//cout<<sum<<endl;
		sum2.pb(sum);

	}

	for (int j = 1; j <= n; j++)
	{
		int i = j, jj = 1;
		ll sum = 0, sum3 = 0;
		while (jj <= n && i <= n)
		{
			sum += (ll) arr[i][jj];
			jj++;
			i++;
		}

		if (j != 1) sum2.pb(sum);

	}

	for (int i = 0; i < n + n - 1; i++) cout << sum2[i] << " ";



	vector<pair<int , pair<int , int>> > v;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n ; j++)
		{
			int x=i+j-2;
			ll ans=sum1[x];
			int y;
			if(i==j) y=n;
			else if(i<j) n++;
			else n--;
			
			

		}
	}

	return 0;
}


