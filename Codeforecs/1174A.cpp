
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

	int n = Int;
	n = n * 2;
	int arr[n + 1];
	For(n) arr[i] = Int;
	sort(arr, arr + n);
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n / 2; i++) sum1 += arr[i];
	for (int i = n / 2; i < n; i++) sum2 += arr[i];

	if (sum1 == sum2) cout << -1 << endl;
	else
	{
		For(n) {
			cout<<arr[i];
			if(i!=n-1) cout<<" ";
		}
		cout<<endl;
	}




	return 0;
}


