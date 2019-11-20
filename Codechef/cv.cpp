
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





char arr[] = {'a', 'e', 'i', 'o', 'u'};

bool isVow(char x)

{
	for (int i = 0; i <= 4; i++) if (x == arr[i]) return 1;
	return 0;
}
int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t = Int;

	while (t--)
	{
		int n = Int;

		string s;
		cin >> s;
		int cnt=0;

		for (int i = 0; i < (int)s.size() - 1 ; i++)
		{
			if (isVow(s[i]) == 0 && isVow(s[i + 1]) == 1) cnt++;
		}
		cout << cnt << endl;
	}


	return 0;
}


