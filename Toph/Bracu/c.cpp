
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
		int len = s.size();
		for (int i = 0; i < len ; )
		{
			if (i == len - 1)
			{
				if (s[i] == 'u') cout << 'o', i++;
				else if (s[i] == 'i') cout << 'e', i++;
				else if (s[i] == 'e') cout << 'a', i++;
				else if (s[i] == 'v') cout << 'b', i++;
				else if (s[i] == 'h') {i++;}
				else cout << s[i], i++;
			}
			else
			{
				if (s[i] == 'u') cout << 'o', i++;
				else if (s[i] == 'i') cout << 'e', i++;
				else if (s[i] == 'e') cout << 'a', i++;
				else if (s[i] == 'v') cout << 'b', i++;
				else if (s[i] == 'c' && s[i + 1] == 'h') cout << 'c', i += 2;
				else if (s[i] == 'k' && s[i + 1] == 'h') cout << 'k', i += 2;
				else if (s[i] == 's' && s[i + 1] == 'h') cout << 's', i += 2;
				else if (s[i] == 'h' && s[i + 1] == 'o') cout << 'o', i += 2;
				else if (s[i] == 'h' && s[i + 1] == 'e') cout << 'a', i += 2;
				else if (s[i] == 'h') {i++;}
				else cout << s[i], i++;
			}

		}
		cout<<endl;
	}

	return 0;
}


