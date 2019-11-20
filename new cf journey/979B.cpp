
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




int res[300];


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n = Int;
	string ku, sh, ka;
	cin >> ku >> sh >> ka;
	int len = ku.size();
	//cout << len << endl;
	int kumax = 99999999, shmax = 9999999, kamax = 99999999;

	for (int i = 0; i < len; i++) res[ku[i]]++;
	for (int i = 1; i < 300; i++) {
		int x = len - res[i];
		if (x <= n) x = 0 + (x ==0?n==1:0);
		else x = x - n;
		kumax=min(kumax,x);
	}

	memset(res, 0, sizeof(res));
	for (int i = 0; i < len; i++) res[sh[i]]++;

	for (int i = 1; i < 300; i++)
	{
		int x = len - res[i];
		if (x <= n) x = 0 +  x ==0?n==1:0;
		else x = x - n;
		shmax = min(shmax, x);

	}



	memset(res, 0, sizeof(res));
	for (int i = 0; i < len; i++) res[ka[i]]++;

	for (int i = 1; i < 300; i++) 
	{
		int x = len - res[i];
		if (x <= n) x = 0 + x ==0?n==1:0;
		else x = x - n;
		kamax = min(kamax, x);
	}
	


	//cout << kumax << " " << shmax << " " << kamax << endl;

	std::vector<int> v;
	v.pb(kamax); v.pb(shmax); v.pb(kumax);
	sort(v.begin(), v.end());
	//if ((kumax <= n && shmax <= n ) || (kumax <= n && kamax <= n) || (shmax <= n && kamax <= n)) puts("Draw");
	if (v[0] == v[1]) puts("Draw");
	else
	{
		if (kumax < shmax && kumax < kamax) puts("Kuro");
		else if (shmax < kumax && shmax < kamax) puts("Shiro");
		else puts("Katie");
	}




	return 0;
}


