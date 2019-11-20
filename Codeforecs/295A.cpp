
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





ll ps[100002];
int tmp[100002];

struct A
{
	int l1, r1, x1;

} qu[100005];


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n, m, k;
	cin >> n >> m >> k;

	int arr[n + 1];
	For1(n) cin >> arr[i];

	for (int i = 1; i <= m; i++)
	{
		cin >> qu[i].l1 >> qu[i].r1 >> qu[i].x1;
	}

	while (k--)
	{
		int l, r;
		cin >> l >> r;
		tmp[l]++;
		tmp[r + 1]--;
	}
	for (int i = 2; i <= m; i++) tmp[i] += tmp[i - 1];
	//For1(m) cout<<tmp[i]<<" ";

	for (int i = 1; i <= m; i++)
	{
		int res = tmp[i];
		int l = qu[i].l1;
		int r = qu[i].r1;
		int x = qu[i].x1;
		ps[l] += (ll)((ll)x * (ll)res);
		ps[r + 1] -= (ll)((ll)x * (ll)res);
		//cout<<ps[l]<<" "<<ps[r+1]<<" "<<l<<" "<<r+1<<endl;
	}
	for (int i = 1;  i <= n ; ++i)
	{
		//cout<<ps[i]<<" ";
		ps[i] += ps[i - 1];
	}
	//cout<<endl;

	for (int i = 1; i <= n ; i++)
	{
		ps[i] += arr[i];
	}

	For1(n) cout << ps[i] << " ";
	cout << endl;

	return 0;
}


