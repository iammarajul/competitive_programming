
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

std::vector<int> di;

void divsior(int n, int l)
{
	int s = sqrt(n);


	for (int i = 1; i <= s; i++)
	{
		if (n % i == 0)
		{
			int a = n / i;
			if (a != i)
			{
				if (a > l) di.pb(a);
				if (i > l) di.pb(i);
			}
			else
			{
				if (i > l) di.pb(a);
			}
		}
	}
}




int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int te = Int;

	for (int tes = 1; tes <= te; tes++)
	{

		int p = Int, l = Int;

		di.clear();


		divsior(p - l, l);
		int len = di.size();

		//cout<<len<<endl;
		sort(di.begin(), di.end());
		//cou<< "Case " << tes << ": ";
		printf("Case %d: ", tes);

		if (len)
		{
			for (int i = 0; i < len; i++)
			{
				printf("%d", di[i]);
				if (i != len - 1) printf(" ");
			}
			printf("\n");
		}

		else printf("impossible\n");


	}









	return 0;
}


