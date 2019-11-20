
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






map<string, int>mp;

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int cnt = 1;
	for (int i = 'a'; i <= 'z'; i++)
	{
		string s = "";
		s.pb((char)i);
		mp[s] = cnt++;
	}
	//cout<<cnt<<endl;
	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = i + 1; j <= 'z'; j++)
		{

			string s;
			s.pb((char)i);
			s.pb((char)j);
			//cout<<s<<" "<<cnt<<endl;
			
			mp[s] =cnt++;

		}
	}


	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = i + 1; j <= 'z'; j++)
		{
			for (int k = j + 1; k <= 'z'; k++)
			{

				string s;
				s.pb((char)i);
				s.pb((char)j);
				s.pb((char)k);
				mp[s] = cnt++;


			}
		}
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = i + 1; j <= 'z'; j++)
		{
			for (int k = j + 1; k <= 'z'; k++)
			{
				for (int k2 = k + 1; k2 <= 'z'; k2++)
				{

					string s;
					s.pb((char)i);
					s.pb((char)j);
					s.pb((char)k);
					s.pb((char)k2);
					mp[s] = cnt++;

				}
			}
		}
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = i + 1; j <= 'z'; j++)
		{
			for (int k = j + 1; k <= 'z'; k++)
			{
				for (int k2 = k + 1; k2 <= 'z'; k2++)
				{
					for (int k3 = k2 + 1; k3 <= 'z'; k3++)
					{
						string s;
						s.pb((char)i);
						s.pb((char)j);
						s.pb((char)k);
						s.pb((char)k2);
						s.pb((char)k3);
						mp[s] = cnt++;
					}
				}
			}
		}
	}

	string kkk;
	while(cin>>kkk)
	{
		cout<<mp[kkk]<<endl;
	}


	return 0;
}


