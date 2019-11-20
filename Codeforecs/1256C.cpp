
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
const int N             = 5e6 + 5;

inline int add(int a, int b) {a += b; return a >= mod ? a - mod : a;}
inline int sub(int a, int b) {a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b) {return (ll)a * b % mod;}





int solve() {


	int n = Int, k = Int;

	string s;
	cin >> s;
	int ans = 0;
	int cnt = 0;
	int pos = 0;
	int pk = 0;
	for (int i = 0; i < n; i++)
	{
		if (k <= 0) break;
		ans += (s[i] - '0');
		if (s[i] == '0')
		{
			if (k >= ans) {
				k -= ans;
				cnt++;
			}
			else
			{
				//k = 0;
				pk = 1;

				pos = ans - k;
				// cout << pos << endl;
				break;

			}
		}

	}
	if (pk == 0)
	{
		for (int i = 0; i < cnt ; i++) cout << 0;

		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0') {
				if (!cnt)
				{
					cout << s[i];
				}
				else cnt--;
			}
			else cout << s[i];
		}
	}
	else
	{
		// puts("s");cout<<cnt<<" "<<pos<<endl;
		for (int i = 0; i < cnt ; i++) cout << 0;

		cnt++;
		// cout << cnt << endl;

		int ans = 0;
		int pl = 0;
		for (int i = 0; i < n; i++)
		{
			if (ans == pos && !pl) {cout << 0; pl = 1;}
			if (s[i] == '0') {
				if (cnt == 0)
				{
					cout << 0;
				}
				else cnt--;
			}
			else {
				cout << s[i];
			}
			ans += (s[i] - '0');
		}
	}
	cout << endl;


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
		//printf("Case %d: ", ++tc);
		solve();
	}

	return 0;




}


