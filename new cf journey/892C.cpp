
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

	int n = Int;

	int arr[n + 1];
	int cnt = 0;
	For(n)
	{
		arr[i] = Int;
		if (arr[i] == 1) cnt++;
	}

	if (cnt)
	{
		cout << n - cnt << endl;
		return 0;

	}

	else
	{
		int mi=999999999;
		for(int i=0;i<n;i++)
		{
			int x=arr[i];
			for(int j=i+1;j<n;j++)
			{
				x=gcd(x,arr[j]);
				if(x==1)
				{
					mi=min(mi,(j-i+1));
				}
			}
		}
		if(mi==999999999) cout<<-1<<endl;
		else
		cout<<(mi-1)+(n-1)<<endl;
	}

}