
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








int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int  n = Int;
	int on = 0, tw = 0;
	for (int  i = 0; i < n; i++)
	{
		int x = Int;
		x == 1 ? on++ : tw++;
	}

	std::vector<int> final;
	int p;
	if (on % 2 == 0) {

		if (on == 0) { for (int i = 1; i <= tw; i++) final.pb(2);}
		else if(tw ==0) {for (int i = 1; i <= on; i++) final.pb(1);}
		else
		{
			final.pb(2);
			final.pb(1);
			for (int i = 1; i < tw; i++) final.pb(2);
			for (int i = 1; i < on; i++) final.pb(1);
		}
		
	}
	else
	{
		if (tw) {
			final.pb(2);
			final.pb(1);
			for (int i = 1; i < tw; i++) final.pb(2);
			for (int i = 1; i < on; i++) final.pb(1);
		}
		else
		{
			for (int i = 1; i <= on; i++) final.pb(1);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << final[i];
		if (i != n - 1) cout << " ";
	}
	cout << endl;



	return 0;
}


