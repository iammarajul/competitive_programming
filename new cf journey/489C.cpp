
#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}


#define  fast			  ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
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
	//fast;
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int, s = Int;
	if(n==1 && s==0) {cout<<0<<" "<<0<<endl;return 0;}
	if (s == 0 || s>n*9) {cout << "-1" << " " << "-1" << endl; return  0;}


	std::vector<int> mx;
	std::vector<int> mn;
	int sum = s;
	for (int i = n; i >= 1; i--)
	{
		int k = sum;
		if (k >= 9)
		{
			mx.pb(9);
			sum -= 9;
		}
		else
		{
			mx.pb(k);
			sum -= k;
		}
	}
	sum = s;
	for (int i = n; i >= 1; i--)
	{
		int x = (i - 1) * 9;
		int k = sum - x;

		if (i == n) {
			if (k <= 0)
			{
				mn.pb(1);
				sum--;
			}
			else
			{
				mn.pb(k);
				sum -= k;
			}
		}
		else {
			if (k <= 0)
			{
				mn.pb(0);
			}
			else
			{
				mn.pb(k);
				sum -= k;
			}
		}
	}

	for(int i=0;i<n;i++) cout<<mn[i];
	cout<<" ";
	for (int i = 0; i < n; i++) cout << mx[i];
	cout << endl;

	return 0;
}


