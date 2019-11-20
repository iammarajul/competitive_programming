
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



string NB[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
string NB1[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string NB2[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

int fn(string j)
{
	for (int i = 0; i < 10; i++)
	{
		if (j.compare(NB[i]) == 0) return i + 1;
	}
	return 0;
}

int fn2(string j)
{
	for (int i = 0; i < 8; i++)
	{
		if (j.compare(NB1[i]) == 0) return i + 2;
	}
	return 0;
}

int fn3(string j)
{
	for (int i = 0; i < 9; i++)
	{
		if (j.compare(NB2[i]) == 0) return i + 11;
	}
	return 0;
}

int solve(int n)
{
	string v;
	while (n > 0)
	{
		v.pb((char)(n % 2 + '0'));
		n = n / 2;
	}
	string v1;
	for (int i = v.size() - 1; i >= 0; i--) v1.pb(v[i]);
	if (v.compare(v1) == 0) return 1;
	else return 0;

}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int tes = Int;
	getchar();
	while (tes--)
	{
		string s;
		getline(cin, s);
		std::vector<string> v;
		string k = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ') k.pb(s[i]);
			if (s[i] == ' ') {
				v.pb(k);
				k = "";
			}
			if (i == ((int)s.size()) - 1)
			{
				//k.pb(s[i]);
				v.pb(k);
			}
		}
		int number = 0;

		// For(v.size()) cout<<v[i]<<" ";

		for (int i = 0; i < v.size(); i++)
		{
			int x = fn(v[i]);

			if (x) {
				if (i + 1 < v.size())
				{
					if (v[i + 1].compare("hundred") == 0) number += 100 * x;
					else  number += 1000 * x;
					i++;
				}
				else number += x;
			}
			else
			{
				int k = fn2(v[i]);
				// cout<<"k=="<<k<<endl;
				if (k)
					number += (k * 10);
				else
				{
					number+=fn3(v[i]);
				}
			}

		}
		// cout << number << endl;
		solve(number)==1?puts("YES"):puts("NO");

	}

	return 0;
}


