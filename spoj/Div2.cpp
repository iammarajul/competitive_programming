
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

int di[500];

int findDiv(int n)
{
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) cnt++;
	}
	di[n] = cnt;
	return cnt;
}
bool ck(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (di[n] % di[i] != 0) return 0;
		}
	}
	return 1;
}




int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	for (int i = 1; i <= 300; i++)
	{
		int x = findDiv(i);
		//cout<<i<<" "<<x<<endl;
		if (x > 3 && ck(i)) cout << i << endl;
	}


	return 0;
}


