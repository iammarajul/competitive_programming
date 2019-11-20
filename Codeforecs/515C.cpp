
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

	int n = Int;
	string s;
	cin >> s;

	std::vector<int> v;
	for (int i = 0; s[i]; i++)
	{
		v.pb(s[i] - '0');
	}

	sort(v.begin(), v.end(), greater<int>());
	std::vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		if (v[i] != 0 && v[i] != 1) {
			if (v[i]==4 || v[i]==8 || v[i]==6 || v[i]==9) {
				if(v[i]!=9) ans.pb(v[i] - 1);
				if(v[i]==4) ans.pb(2),ans.pb(2);
				else if(v[i]==8) ans.pb(2),ans.pb(2),ans.pb(2);
				else if(v[i]==6) ans.pb(3);
				else ans.pb(7),ans.pb(3),ans.pb(3),ans.pb(2);

			}
			else
			{
				ans.pb(v[i]);
			}

		}


	}
	sort(ans.begin(), ans.end(),greater<int>());

	for(int i=0;i<ans.size();i++) cout<<ans[i];
		cout<<endl;

	return 0;
}


