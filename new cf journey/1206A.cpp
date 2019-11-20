
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





int a3[300];
int b3[300];

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int a1 = Int;
	int arr1[a1 + 1];
	For(a1) {arr1[i] = Int; a3[arr1[i]] = 1;}
	int b1 = Int;
	int arr2[b1 + 1];
	For(b1) {arr2[i] = Int; a3[arr2[i]] = 1;}

	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < b1; j++)
		{
			if (!a3[arr1[i] + arr2[j]]) {
				cout << arr1[i] << " " << arr2[j] << endl;
				return 0;
			}
		}
	}

return 0;
}


