
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

	int n = Int, m = Int;

	int arr[m + 1];
	int arr2[m + 1];


	For(m) {
		arr[i] = Int;

		arr2 [i] = Int;
	}

	int res = arr2[0] + arr[0] - 1;
	//cout<<res<<endl;
	for (int i = 0; i < m - 1 ; i++)
	{
		int x1 = arr[i + 1] - arr[i];
		int x2 = abs(arr2[i + 1] - arr2[i]);

		if (x2 > x1)
		{
			cout << "IMPOSSIBLE" << endl;
			return 0;
		}
		if (arr2[i + 1] == arr2[i] )
		{
			int ans = ceil((x1 - 1) / 2.0);
			ans += arr2[i];

			res = max( ans , res);

		}
		else if(arr2[i]>arr2[i+1])
		{
			int pk = x1 - x2;

			int ans = ceil(pk / 2.0);
			ans +=arr2[i];

			res = max( ans , res);

		}
		else
		{
			int pk = x1 - x2;

			int ans = ceil(pk / 2.0);
			ans +=arr2[i+1];

			res = max( ans , res);
		}

		cout<<res<<endl;



	}
	res = max(res, arr2[m - 1] + (n - arr[m - 1] ));

	cout << res << endl;





	return 0;
}


