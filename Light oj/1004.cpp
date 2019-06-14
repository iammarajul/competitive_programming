
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




int dp[301][301];



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int te=Int;

	for(int tes=1;tes<=te;tes++){

	memset(dp,  0  ,sizeof(dp));

	int n = Int;
	n=n*2 -1 ;
	int arr[n + 1][((n + 1) / 2) + 1];
	int x = (n + 1) / 2;
	
	for (int i = 1; i <= n; i++)
	{

		if (i <= x)
		{
			for (int j = 1; j <= i; j++)
			{
				arr[i][j] = Int;
			}
		}
		else
		{
			for (int j = 1; j <= 2 * x - i; j++) arr[i][j] = Int;
		}
	}
	dp[1][1] = arr[1][1];

	

	
	for (int i = 1; i < x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			
			dp[i + 1][j] = max(dp[i + 1][j] , dp[i][j] + arr[i + 1][j]);
			dp[i + 1][j + 1] = max(dp[i + 1][j + 1] , dp[i][j] + arr[i + 1][j + 1]);

			//cout<<dp[i + 1][j]<<" "<<dp[i+1][j+1] <<endl;

		}
	}

	for (int i = x; i < n; i++)
	{
		int kk = 2 * x - i;

		for (int j = 1; j <= kk; j++)
		{
			if (j == 1){ dp[i + 1][j] = max(dp[i + 1][j] , dp[i][j] + arr[i + 1][j]); }
			else if (j == kk) {dp[i + 1][kk - 1] = max(dp[i + 1][kk - 1] , dp[i][j] + arr[i + 1][kk - 1]);}
			else {
				dp[i + 1][j] = max(dp[i + 1][j] , dp[i][j] + arr[i + 1][j]);
				dp[i + 1][j - 1] = max(dp[i + 1][j - 1] , dp[i][j] + arr[i + 1][j - 1]);
				//cout<<dp[i + 1][j]<<" "<<dp[i+1][j+1] <<endl;
			}

		}
	}

	printf("Case %d: %d\n",tes,  dp[n][1]);
	

}

	return 0;
}


