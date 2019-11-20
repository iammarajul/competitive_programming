
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
		map<pair<int, int>, int>mp;
		string s;
		cin >> s;
		int len = s.size();

		int zer = 0;
		int ans = 0;
		for (int i = 0; i < len; i++)
		{

			int num = 0;
			for (int j = i; j < min(len, i + 18); j++)
			{
				num = num * 2 + (s[j] - '0');
				//cout << num << " ";
				int lo = j - i + 1;
				int hi = j - i + 1 + zer;

				if (num >= lo && num <= hi)
				{
					if (mp[ {j, j - num + 1}] == 0)

					{
						ans++;
						//cout<<i<<endl;
						mp[ {j, j - num + 1}] = 1;
					}
				}
			}
			if (s[i] == '0') zer++;
			else zer = 0;
			//cout << endl;
		}

		cout << ans << endl;
	}

	return 0;
}


