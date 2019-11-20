
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


const int mod           = 1e9 + 7;
const int inf           = (int)2e9 + 5;
const ll  Inf           = (ll)1e18 + 5;
const int N             = 1e5 + 5;

inline int add(int a, int b) {a += b; return a >= mod ? a - mod : a;}
inline int sub(int a, int b) {a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b) {return (ll)a * b % mod;}

int arr[N];
int tree[N * 3];

void init(int node, int a, int b)
{
	if (a == b)
	{
		tree[node] = arr[b];
		return ;
	}
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (a + b) / 2;

	init(left, a, mid);
	init(right, mid + 1, b);

	tree[node] = tree[left] + tree[right];

}


void upd0(int node, int a, int b, int i, int newV)
{
	if (i < a || i > b) return ;
	else if (a == b) {
		tree[node] = newV;
		return ;
	}

	int left = node * 2;
	int right = node * 2 + 1;

	int mid = (a+b) / 2;

	upd0(left, a, mid, i, newV);
	upd0(right, mid + 1, b, i, newV);
	tree[node] = tree[left] + tree[right];

}

int query(int node, int a, int b, int l, int r)
{
	if (l < a || r > b) return 0;
	if (a >= l && b <= r) return tree[node];

	int left = node * 2;
	int right = node * 2 + 1;

	int mid = (a+b) / 2;

	int ls = query(left, a, mid, l, r);
	int rs = query(right, mid + 1, b , l, r);
	return ls + rs;

}

int solve() {

	int n = Int, q = Int;

	For1(n) arr[i] = Int;

	init(1, 1, n);

	while (q--)
	{
		int ty = Int;
		if (ty == 1)
		{
			int ind = Int;
			ind++;
			printf("%d\n", query(1, 1, n, ind, ind));
			upd0(1, 1, n, ind, 0);
		}
		else if (ty == 2)
		{
			int ind = Int, val = Int;
			upd0(1, 1, n, ind, val);
		}
		else
		{
			int u = Int, v = Int;
			printf("%d\n", query(1, 1, n, u, v));
		}
	}




	return 0;
}




int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test = 1, tc = 0;
	scanf("%d", &test);
	//cin >> test;
	while (test--) {
		printf("Case %d:\n", ++tc);
		solve();
	}

	return 0;




}


