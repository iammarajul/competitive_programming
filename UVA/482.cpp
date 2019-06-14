
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
	getchar();
	
	for (int tes = 1; tes <= n; tes++)
	{



				getchar();

		string s1, s2;

		getline(cin, s1);
		getline(cin, s2);

		int num = 0;
		std::vector<int> pos;
		std::vector<string> pos2;
		for (int i = 0; i < (int) s1.size() ; i++)
		{
			if (s1[i] == ' ')
			{
				pos.pb(num);
				num = 0;
			}
			else
			{
				num = (num * 10) + (s1[i] - '0');
			}

			if (i == s1.size() - 1) pos.pb(num);
		}
		string kk;
		for (int i = 0; i < (int) s2.size(); i++)
		{
			if (s2[i] == ' ')
			{
				pos2.pb(kk);
				kk = "";
			}
			else
			{
				kk.pb(s2[i]);
			}
			if (i == s2.size() - 1 ) pos2.pb(kk);
		}
		int len = pos.size();
		string arr [len + 1];

		for (int i = 0; i < len; i++)
		{
			//
			//cout << pos[i] << " " << pos2[i] << endl;
			arr[pos[i]] = pos2[i];
		}



		For1(len ) cout << arr[i] << endl;
		if (tes != n) cout << endl;
	}


	return 0;
}


