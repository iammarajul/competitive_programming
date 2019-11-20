
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





std::vector<pair<int, int>> a;
std::vector<pair<int, int>> b;

int p[100005];
int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int, m = Int;

	for (int i = 0; i < m; i++)
	{
		int l, x, y;
		cin >> l >> x >> y;
		x--;y--;
		if(l==1) a.pb({x,y});
		else b.pb({x,y});
	}

	for(int i=0;i<a.size();i++)
	{
		for(int j=a[i].first;j<=a[i].second;j++) p[j]++;
	}
	int v=0;
	for(int i=0;i<b.size();i++)
	{
		int x=0;
		for(int j=b[i].first;j<=b[i].second;j++)
		{
			if(!p[j])
			{
				x=1;
				break;
			}
		}
		if(x==0) {v=1;break;}
	}
	if(v==1) puts("NO");
	else
	{
		int x=100000;
		for(int i=0;i<n;i++)
		{
			if(p[i])
			{
				if()
			}
		}
	}








	return 0;
}


