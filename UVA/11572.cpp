
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
		int n = Int;
		int arr[n + 1];
		std::map<int, int> mp;
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}
		int po = 1;
		int ans = 0;
		int p=1;
		for (int i = 1; i <= n; i++)
		{
			int x = arr[i];
			if (mp[x] < po  || !mp[x])
			{
				mp[x] = i;
			}
			else
			{
				int z=i-po;
				
				po=mp[x] +1;
				mp[x] = i;
				p=0;
				ans=max(ans,z);
			}




		}
		if(p==1) ans=n;
		cout << ans << endl;




	}


	return 0;
}


