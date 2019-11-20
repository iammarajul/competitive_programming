
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

	ll n = Int;
	double arr[n + 1];
	ll a1 = 0, a2 = 0, b1 = 0, b2 = 0, pos = 0, neg = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] >= 0) a1 += ceil(arr[i]), a2 += (int) arr[i], pos++;
		else b1 += -1 * floor(arr[i]), b2 += (int) - arr[i], neg++;

	}
	//cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;
	int x, y;
	if (b1 >= a1) {
		x = a1;
	}
	else x = b1;

	int z1 = a1 - x;
	int z2 = b1 - x;
	//cout << z1 << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			if (z1)
			{
				if (ceil(arr[i]) != floor(arr[i])) {
					cout << (int) arr[i] << endl;
					z1--;
				}
				else cout << (int) arr[i] << endl;
			}
			else cout << ceil(arr[i]) << endl;
		}
		else
		{
			if (z2)
			{
				if (ceil(arr[i]) != floor(arr[i])) {
					cout << (int) arr[i] << endl;
					z2--;
				}
				else cout << (int) arr[i] << endl;
			}
			else cout << floor(arr[i]) << endl;
		}
	}





	return 0;
}


