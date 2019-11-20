
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

	int n = Int;

	while (n--)
	{
		string s, t , p;
		cin >> s >> t >> p;

		int dp1[30], dp2[30];
		memset(dp1, 0, sizeof(dp1));
		memset(dp2, 0, sizeof(dp2));

		for (int i = 0; s[i] ; i++) dp1[s[i] - 'a']++;
		for (int i = 0; p[i] ; i++) dp1[p[i] - 'a']++;
		for (int i = 0; t[i] ; i++) dp2[t[i] - 'a']++;

		int con1 = 1,con2=1;
		for (int i = 0; i <= 25; i++)
		{
			if (dp2[i] > dp1[i]) {con1 = 0; break;}
		}
		int lens = s.size();
		int lent = t.size();
		if(lens>=lent && s.compare(t)) 
		{
			puts("NO");
			continue;
		}
		int i,j;
		for (i = 0, j = 0;i < lens;)
		{
			if (s[i] == t[j]) i++, j++;
			else j++;
			if (j > lent) break;
		}
		if(i!=lens) con2=0;
		if(con2 && con1 ) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


	return 0;
}


