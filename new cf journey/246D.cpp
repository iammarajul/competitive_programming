
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



int n, m, arr[MAX];
std::vector<int> adj[MAX];
std::vector<int> adj2[MAX];
int value[MAX];


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	n = Int, m = Int;
	set<int>st;
	set<int>::iterator it;
	For1(n) {
		arr[i] = Int;
		st.insert(arr[i]);
		adj2[arr[i]].pb(i);
	}
	for (int i = 0; i < m; i++)
	{
		int a = Int, b = Int;
		adj[a].pb(b);
		adj[b].pb(a);

	}

	for (it = st.begin(); it != st.end(); it++)
	{
		set<int>st2;
		int ss = *it;
		//cout<<adj2[ss].size()<<"? V";
		for (int i = 0; i < adj2[ss].size(); i++)
		{
			int ss2 = adj2[ss][i];
			int k = arr[ss2];
			//cout<<adj[ss2].size()<<"TT"<<endl;
			for (int j = 0; j < adj[ss2].size(); j++)
			{
				if (arr[adj[ss2][j]] != k) st2.insert(arr[adj[ss2][j]]);
			}
		}
		value[ss] = st2.size();
		//cout<<value[ss]<<"      "<<ss<<endl;
	}
	sort(arr + 1, arr + n + 1);
	int ans = value[arr[1]], pk = arr[1];
	for (int i = 1; i <= n; i++)
	{
		//cout<<value[arr[i]]<< " ";

		if (value[arr[i]] > ans)
		{
			ans = value[arr[i]];
			pk = arr[i];

		}
	}
	cout << pk << endl;




	return 0;
}


