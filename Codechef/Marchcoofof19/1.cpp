
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
	int n = Int;int q=Int;
	ll arr[n + 3];
	//ll arr2[n + 3];

	for (int i = 1; i <= n; i++)
	{
		arr[i] = LL;
	}
	ll sum = arr[1];
	for (int i = 1; i <= n; i++)
	{
		sum = sum ^ arr[i];
	}

	arr[n+1] = sum;

	for (int i = 2; i <= n + 1; i++)
	{
		arr[i]=arr[i]^ arr[i-1];
	}

	//for(int i=1;i<=n+1;i++) cout<<arr[i]<<" ";

	

	while(q--)
	{
		int cc=Int;
		int hh=cc%(n+1);
		if(hh==0) printf("0\n");
		else printf("%lld\n",arr[hh]);
	}





	return 0;
}


