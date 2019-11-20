
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






struct A
{
	int a, b;
} mp[1000];


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int arr[] = {4, 8, 15, 16, 23, 42};

	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			mp[arr[i]*arr[j]].a = arr[i];
			mp[arr[i]*arr[j]].b = arr[j];

			//cout<<arr[i]*arr[j]<<endl;

		}
	}

	cout << "? " << 1 << " " << 2 << endl;
	int x = Int;
	cout << "? " << 2 << " " << 3 << endl;
	int y = Int;
	std::vector<int> v;
	int a1 = mp[x].a;
	int a2 = mp[y].a;
	int b1 = mp[x].b;
	int b2 = mp[y].b;

	if (a1 == a2) {
		v.pb(b1);
		v.pb(a1);
		v.pb(b2);

	}
	else if (a1 == b2)
	{
		v.pb(b1);
		v.pb(a1);
		v.pb(a2);
	}
	else if (b1 == b2)
	{
		v.pb(a1);
		v.pb(b1);
		v.pb(a2);
	}
	else if (b1 = a2)
	{
		v.pb(a1);
		v.pb(b1);
		v.pb(b2);
	}

	//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

	cout << "? " << 4 << " " << 5 << endl;
	x = Int;
	cout << "? " << 5 << " " << 6 << endl;
	y = Int;
	a1 = mp[x].a;
	a2 = mp[y].a;
	b1 = mp[x].b;
	b2 = mp[y].b;

	if (a1 == a2) {
		v.pb(b1);
		v.pb(a1);
		v.pb(b2);

	}
	else if (a1 == b2)
	{
		v.pb(b1);
		v.pb(a1);
		v.pb(a2);
	}
	else if (b1 == b2)
	{
		v.pb(a1);
		v.pb(b1);
		v.pb(a2);
	}
	else if (b1 = a2)
	{
		v.pb(a1);
		v.pb(b1);
		v.pb(b2);
	}

	cout << "! ";
	for (int i = 0; i < 6; i++)
	{
		cout << v[i];
		if (i != 5) cout << " ";
	}

	cout << endl;



	return 0;
}


