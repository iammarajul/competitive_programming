
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

	string s;
	cin >> s;
	int lo = -1;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == 'a')
		{
			lo = i;
			break;
		}
	}

	if (lo = -1)
	{
		if (s.size() % 2 != 0)
		{
			cout << ":(" << endl;
			return 0;
		}
		else
		{
			string s1=s.substr(0,s.size()/2);
			string s2=s.substr(s.size()/2,s.size()/2);
			if(s1.compare(s2)==0) cout<<s1<<endl;
			else cout << ":(" << endl;
			return 0;

		}
	}
	else
	{
		string nw1="",nw2="";
		for(int i=0;i<=lo;i++) 
		{
			if(s[i]!='a') nw1.pb(s[i]);
		}
		for(int i=lo+1;i<s.size();i++) 
		{
			if(s[i]!='a') nw2.pb(s[i]);
		}

		if(nw1.compare(nw2)==0)
		{
			for(int i=0;i<=lo;i++) cout<<s[i];
				cout<<endl;
			return 0;
		}
		else
		{
			cout << ":(" << endl;
			return 0;
		}

	}


	return 0;
}


