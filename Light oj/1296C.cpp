
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
#define  MAX              100007;




int vis[10002];


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n = Int;
	int arr[n + 1];
	memset(vis, -1 ,sizeof(vis));

	std::vector< pair<int, int> > v;
	for (int i = 0; i < n; i++)
	{
		arr[i] = Int;
		v.pb({(arr[i]), i});
	}

	sort(v.begin(), v.end());
	for (int i = v.size() - 1; i >= 0; i--)
	{
		int x = v[i].first;
		int y = v[i].second;
		if (y != n - 1)
		{
			if (vis[y]==-1 && vis[y + 1]==-1) {
				vis[y] = x;
				vis[y + 1] = 0;
			}
		}
		else
		{
			if(vis[y]==-1)
			{
				vis[y]=x;
			}
		}		
	}
	ll sum=0;
	for(int  i=0;i<n;i++) sum+=(vis[i]==-1?0:vis[i]);

	printf("%lld\n", sum);


	return 0;
}


