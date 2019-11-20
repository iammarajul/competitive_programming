
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






int arr[27];

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	cin >> s;

	for (int i = 0; s[i]; i++)
	{
		arr[s[i] - 'a' + 1]++;
	}

	int lo;
	for (int i = 1; i <= 26; i++)
	{
		if (arr[i] != 0)
		{
			lo = i; break;
		}
	}

	int odd = 0, even = 0;
	for (int i = 1; i <= 26; i++)
	{
		if (arr[i])
		{
			arr[i] % 2 == 0 ? even++ : odd++;
		}

	}
	if (odd % 2 == 0)
	{
		//cout<<"ue"<<endl;
		for (int i = 1; i <= 26; i++)
		{
			if (arr[i])
			{
				if (arr[i] % 2 != 0)
				{
					arr[i]--;
					arr[lo]++;
				}
			}

		}
		for (int i = 1; i <= 26; i++)
		{
			if (arr[i])
			{
				for (int j = 0; j < arr[i] / 2; j++) cout << (char)(i+'a'-1);
			}
		}
		for (int i = 26; i >=1 ; i--)
		{
			if (arr[i])
			{
				for (int j = 0; j < arr[i] / 2; j++) cout << (char)(i+'a'-1);
			}
		}
	}
	else
	{
		int p = 0;
		for (int i = 1; i <= 26; i++)
		{
			if (arr[i])
			{
				if (arr[i] % 2 != 0)
				{
					if (p == 0) {
						p = 1;

					}
					else
					{
						arr[i]--;
						arr[lo]++;
					}
				}
			}

		}


	}




	return 0;
}


