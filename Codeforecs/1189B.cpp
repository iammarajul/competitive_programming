
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






int vis[100004];

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;
	int arr[n + 1];
	For1(n) arr[i] = Int;

	vector<ll >v;
	int cnt = 1;
	sort(arr+1,arr+n+1);
	v.pb(arr[1]);
	for (int i = 2; i <= n; i++) if (i % 2 == 0) v.pb(arr[i]);
	for (int i = n; i >= 3; i--) if (i % 2 != 0) v.pb(arr[i]);
	bool p=true;
	for (int i = 0; i < n; i++) {
		ll pev, nxt;
		if (i == 0) {pev = v[n-1]; nxt = v[i + 1];}
		else if (i == n-1) {nxt =v[0]; pev = v[i - 1];}
		else {pev = v[i - 1]; nxt = v[i + 1];}
		if (v[i] >= (pev + nxt)) {p = false;break;}
	}
	if(!p) puts("NO");
	else {
		puts("YES");
		For(n) cout<<v[i]<<" ";
		cout<<endl;
	}
	int 

	return 0;
}


