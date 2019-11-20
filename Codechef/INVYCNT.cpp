
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
		map<int , int>mp;

		int n = Int;
		int k = Int;

		int arr[n + 1];
		int arr2[n + 1];
		For1(n) {arr[i] = Int; arr2[i] = arr[i];}

		sort(arr2 + 1, arr2 + n + 1);
		for (int i = 1; i <= n; i++)
		{
			int x = upper_bound(arr2 + 1, arr2 + n, arr2[i] - 1) - (arr2 + 1);

			// cout<<x<<endl;

			mp[arr2[i]] = x;
		}
		ll ans = 0;
		for (int i = 1; i <= n; i++)
		{
			ll hj = mp[arr[i]];
			// cout << " " << hj << endl;
			ll aa = hj * ((ll)k - 1);
			// cout << "AA=" << aa;
			ll sum = (((double)k - 1) / (double) 2) * (double)((2 * aa) + ((ll)k - 2) * (-hj));

			// cout << " sum=" << sum << endl;

			ans += sum;

		}

		 // cout<<ans<<endl;



		// int arr[] = {10, 6, 15, 20, 30, 5, 7};
		std::vector<int> low;
		for(int i=1;i<=n;i++)
		{
			int cnt =0;
			for(int j=i+1;j<=n;j++)
			{
				if(arr[i]>arr[j]) cnt++;
			}
			low.pb(cnt);
			// cout<<cnt<<"  "<<arr[i]<<endl;
		}
		// cout << ans << endl;
		for (int i = 0; i < n; i++)
		{
			// cout << low[i] << " ";
			ans += (ll)(low[i] * k);
		}

		cout << ans << endl;


		

	}

return 0;




	return 0;
}


