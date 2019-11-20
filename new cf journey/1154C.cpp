
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

	int arr[] = {2, 1, 1, 2, 3, 1, 3};

	int a = Int, b = Int, c = Int;

	int z1 = a / 3, z2 = b / 2, z3 = c / 2;

	int mn = min(z1, z2);
	mn = min(mn, z3);
	
	ll ans = (ll)(mn * 7);
	z1 = a - (mn * 3);
	z2 = b - (mn * 2);
	z3 = c - (mn * 2);

	//cout<<z1<<" "<<z2<<" "<<z3<<endl;
	int b1=z1,b2=z2,b3=z3;
	int ans2=0;
	for (int i = 0; i < 7; i++)
	{ 	z1=b1,z2=b2,z3=b3;
		int j = i, cnt = 0;
		while (1)
		{
			if (arr[j] == 1)
			{
				if (z1) z1--;
				else break;
			}
			else if (arr[j] == 2)
			{
				if (z2) z2--;
				else break;
			}
			else
			{
				if (z3) z3--;
				else break;
			}
			cnt++;
			j++;
			if (j == 7) j = 0;
		}
		//cout<<cnt<<endl;
		ans2=max(ans2,cnt);
	}

	cout<<ans+ans2<<endl;

	




	return 0;
}


