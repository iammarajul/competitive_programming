
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



bool prm[100006] ;
std::vector<int> pp;
void sieve(int N) {
	prm[0] = prm[1] = 1 ;
	for (int i = 4 ; i <= N ; i += 2) prm[i] = 1 ;
	for (int i = 3 ; i * i <= N ; i += 2) {
		if (!prm[i]) {
			for (int j = i * i ; j <= N ; j += i + i)prm[j] = 1 ;
		}
	}
	for (int i = 2; i <= N; i++) if (prm[i] == 0) pp.pb(i);
}

int nod(int n)
{
	std::vector<int> pk;
	int c = n;
	int cnt = 0;
	while (c > 1)
	{
		int ans = 0;
		while (1)
		{
			if (c % pp[cnt] != 0 || c == 1) break;
			c = c / pp[cnt];
			ans++;
		}
		if (ans) pk.pb(ans);
		cnt++;
		if(cnt>=pp.size()) {pk.pb(1);break;}
		

	}
	int ret = 1;

	for (int i = 0; i < pk.size(); i++)
	{
		ret *= (pk[i] + 1);
	}
	return ret;
}

struct ac
{
	int val, num;
};

bool cmp(ac a, ac b)
{
	if (a.val > b.val) return 1;
	if (a.val < b.val) return 0;
	if (a.num < b.num) return 1;
	if (a.num > b.num) return 0;


}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	sieve(100004);

	int tes = Int;
	while (tes--) {
		int a = Int, b = Int;
		std::vector<ac> bb;
		for (int mm = a; mm <= b; mm++)
		{
			int nd = nod(mm);
			//cout<<nd<<endl;
			bb.pb({nd, mm});
		}

		sort(bb.begin(), bb.end(), cmp);
		printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, bb[0].num, bb[0].val);
		//cout<<bb[0].num<<" "<<bb[0].val<<endl;
	}


	return 0;
}


