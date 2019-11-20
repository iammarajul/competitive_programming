
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


map<string, int>mp;



struct A
{
	string st;
	int po;
	int hei;
	A() {
		st = "";
		po = 0;
		hei = 0;
	}
};

bool cmp(A a,A b)
{
	if(a.po>b.po) return 1;
	if(a.po<b.po) return 0;
	if(a.hei>b.hei) return 1;
	if(a.hei<b.hei) return 0;
}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int te = Int;
	while (te--)
	{

		int cnt =0; A node[6];
		mp.erase(mp.begin(), mp.end());
		for (int i = 0; i < 12; i++)
		{
			string a, b, c;
			int x, y;
			cin >> a >> x >> c >> y >> b;
			if (mp[a] == 0) mp[a] = ++cnt;
			if (mp[b] == 0) mp[b] = ++cnt;
			int v1 = mp[a], v2 = mp[b];

			node[v1].st = a; node[v2].st = b;
			if (x == y)
			{
				node[v1].po++; node[v2].po++;
			}
			else if (x > y)
			{
				node[v1].po += 3;
				node[v1].hei += (x - y);
				node[v2].hei -= (x - y);

			}
			else
			{
				node[v2].po += 3;
				node[v2].hei += (y - x);
				node[v1].hei -= (y - x);

			}
		}

		//for(it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;

		
		sort(node+1,node+5,cmp);
		cout<<node[1].st<<" "<<node[2].st<<endl;
	}


	return 0;
}


