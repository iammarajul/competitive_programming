
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





int dp[100005][11];


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	int arr[n+1];
	For(n)
	{
		arr[i] = Int;
		dp[i][arr[i]]++;
		if (i != 0)
			for (int j = 1; j <= 10; j++) dp[i][j] += dp[i - 1][j];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		set<int> st;
		set<int> ::iterator it ;
		for (int j = 1; j <= 10; j++)
		{
			st.insert(dp[i][j]);
		}
		if (st.size() <= 2)
		{
			if (st.size() == 1 )
			{
				cout << i + 1 << endl;
				return 0;
			}
			else
			{
				it = st.begin();
				int x = *it++;
				int y = *it;
				int cnt1 = 0, cnt2 = 0;
				for (int j = 1; j <= 10; j++)
				{
					if (dp[i][j] == x) cnt1++;
					else cnt2++;
				}

				if (abs(x - y) == 1 &&  ((cnt1 == 1 && cnt2 == 9 ) || (cnt1 == 9 && cnt2 == 1)))
				{
					cout<<i+1<<endl;
					return 0;
				}

			}
		}
	}


	return 0;
}


