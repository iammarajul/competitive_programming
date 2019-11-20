
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


int size[200007];
int par[200007];
void make_set(int n)
{
	for (int i = 0; i < n; i++) {
		par[i] = i;
		size[i] = 1;
	}
}

int find_set(int v) {
	if (v == par[v])
		return v;
	return par[v] = find_set(par[v]);
}

void union_sets(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		if (size[a] < size[b])
			swap(a, b);
		par[b] = a;
		size[a] += size[b];
	}
	cout << size[a] << endl;
}




int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int te = Int;

	while (te--) {

		int n = Int;
		std::map<string, int> mp;
		int cnt = 0;
		make_set(2 * n);
		for (int i = 0; i < n; i++)
		{
			string a, b;
			cin >> a >> b;
			if (!mp[a]) mp[a] = ++cnt;
			if (!mp[b]) mp[b] = ++cnt;

			int x = mp[a], y = mp[b];
			//cout<<x<<" "<<y<<endl;
			union_sets(x, y);
		}
	}

	return 0;
}


