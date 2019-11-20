
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

	ll n, m;
	cin >> n >> m;
	ll a = max(n, m);
	ll b = min(n, m);
	ll an1;
	if (b == 1) {
		ll kkk=a / 3;
		if(a%3==2) kkk++;
		cout << kkk<< endl;
		return 0;
	}

	ll x = ceil(a / 2.0);
	ll y = b / 3;
	ll sheh = b % 3;
	if(sheh==2) y++;
	if (sheh == 1)
	{
		ll kkk=a / 3;
		if(a%3==2) kkk++;
		an1 = (x * y) + kkk;
	}
	else 
		an1 = (x * y);



	a = min(n, m);
	b = max(n, m);
	ll an2;


	x = ceil(a / 2.0);
	y = b / 3;
	sheh = b % 3;
	if (sheh == 1)
	{
		ll kkk=a / 3;
		if(a%3==2) kkk++;
		an2 = (x * y) + kkk;
	}
	else
		an2 = (x * y);
	//cout<<an1<<" "<<an2<<endl;

	cout << max(an2, an1) << endl;


	return 0;
}


