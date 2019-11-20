
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


int bs;
int n, q;
int arr[MAX];
int cnt[MAX];
int ans = 0;
int answer[MAX];

struct A
{
	int l, r, id;
} node[MAX];

bool cmp(A a, A b)
{
	int x = a.l ;
	int y = b.l ;

	if(x<y) return 1;
	if(x>y) return 0;
	if(a.r<b.r) return 1;
	if(a.r>b.r) return 0;
	if(a.r==b.r) return 0;
	//if (x != y) return x<y;
	//return a.r<b.r;
}


void add(int x)
{
	if (x <= n)
	{
		if (cnt[x] == x) ans--;
		cnt[x]++;
		if (cnt[x] == x) ans++;

	}
}

void rmv(int x)
{
	if (x <= n)
	{
		if (cnt[x] == x) ans--;
		cnt[x]--;
		if (cnt[x] == x) ans++;
	}
}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	n = Int, q = Int;
	bs = sqrt(n);

	For(n) arr[i] = Int;

	for (int i = 0; i < q; i++)
	{
		int a = Int, b = Int;
		node[i].l = --a;
		node[i].r = --b;
		node[i].id = i;
	}

	sort(node, node + q, cmp);
	//for(int i=0;i<q;i++) cout<<node[i].l<<" "<<node[i].r<<endl;
	
	int mo_left = 0, mo_right = -1;
	for (int i = 0; i < q; i++)
	{
		int left = node[i].l;
		int right = node[i].r;

		while (mo_right < right)
		{
			mo_right++;
			add(arr[mo_right]);
		}
		while (mo_right > right)
		{
			rmv(arr[mo_right]);
			mo_right--;
		}

		while (mo_left < left)
		{
			rmv(arr[mo_left]);
			mo_left++;
		}
		while (mo_left > left)
		{
			mo_left--;
			add(arr[mo_left]);
		}
		answer[node[i].id] = ans;
		//cout<<ans<<" "<<mo_left<<" "<<mo_right<<endl;

	}

	for (int i = 0; i < q; i++)
	{
		cout << answer[i] << endl;
	}




	return 0;
}


