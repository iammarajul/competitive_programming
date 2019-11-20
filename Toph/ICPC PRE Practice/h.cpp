
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
	int a, b;

	std::vector<int> v;

	cout << "0123" << endl;

	cin >> a >> b;
	if (a == 4 && b == 0) return 0;

	if (a || b)
	{
		cout << "0000" << endl;
		cin >> a >> b;
		if (a || b) v.pb(0);

		cout << "1111" << endl;
		cin >> a >> b;
		if (a || b) v.pb(1);

		cout << "2222" << endl;
		cin >> a >> b;
		if (a || b) v.pb(2);

		cout << "3333" << endl;
		cin >> a >> b;
		if (a || b) v.pb(3);
	}

	cout << "4567" << endl;

	cin >> a >> b;
	if (a == 4 && b == 0) return 0;

	if (a || b) {
		cout << "4444" << endl;
		cin >> a >> b;
		if (a || b) v.pb(4);

		cout << "5555" << endl;
		cin >> a >> b;
		if (a || b) v.pb(5);

		cout << "6666" << endl;
		cin >> a >> b;
		if (a || b) v.pb(6);

		cout << "7777" << endl;
		cin >> a >> b;
		if (a || b) v.pb(7);
	}

	cout << "8989" << endl;
	cin >> a >> b;
	if (a || b)
	{
		cout << "8888" << endl;
		cin >> a >> b;
		if (a || b) v.pb(8);

		cout << "9999" << endl;
		cin >> a >> b;
		if (a || b) v.pb(9);

	}





	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			for (int k = 0; k <= 3; k++)
			{
				for (int jh = 0; jh <= 3; jh++)
				{
					if ((i == j || i == k  || i == jh) || (j == i || j == k  || j == jh) || ( jh ==  i  || jh == j  || i == k ) || ( k == i || k ==  j  || k == jh)) {

					}
					else {
						if ((v[i] == 0 && v[j] == 1 && v[k] == 2 && v[jh] == 3) || (v[i] == 4 && v[j] == 5 && v[k] == 6 && v[jh] == 7)) {

						}
						else
						{
							cout << v[i] << v[j] << v[k] << v[jh] << endl;
							cin >> a >> b;
							if (a == 4 && b == 0) return 0;
						}
					}

				}
			}
		}
	}





	return 0;
}


