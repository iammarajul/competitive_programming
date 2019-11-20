
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
#define  MAX              100007;






map<pair<int, int> , int>mp;
map<pair<int, int> , int>::iterator it;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n = Int;
	int arr1[n + 1];
	int arr2[n + 1];
	For(n) arr1[i] = Int;
	For(n) arr2[i] = Int;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != 0) {
			int a1 = arr1[i] / gcd(arr2[i], arr1[i]);
			int a2 = arr2[i] / gcd(arr2[i], arr1[i]);
			//cout<<x<<endl;
			mp[{a1,a2}]++;
		}
		else
		{
			if (arr2[i] == 0) cnt++;
		}
	}
	int mx = 0;
	for (it = mp.begin(); it != mp.end(); it++)
	{

		mx = max(mx, it->second);
	}

	cout << mx + cnt << endl;

	return 0;
}


