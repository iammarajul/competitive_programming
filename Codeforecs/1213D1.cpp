
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




int stp(int x, int k)
{
	int cnt = 0;
	int p = 1;
	while (1)
	{
		if (x == k) break;
		if (x < k) {p = 0; break;}
		x = x / 2;
		cnt++;
	}
	if (p) return cnt;
	else return -1;
}

int zer(int arr[100], int k, int n)
{

	sort(arr,arr+n);
	std::vector<int> vc;
	for (int i = 0; i < n; i++)
	{
		int pk = stp(arr[i], 0);
		vc.pb(pk);

	}

	sort(vc.begin(), vc.end());

	int sum = 0;
	for (int j = 0; j < k; j++) sum += vc[j];
	return sum;

}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//cout<<stp(10,10);

	int n = Int, k = Int;
	int arr[n + 1];

	For(n) arr[i] = Int;


	sort(arr, arr + n);




	int ans = zer(arr,k,n);
	
	for (int i = 0; i < n; i++)
	{
		int x = arr[i];

		int cnt = 0;

		std::vector<int> fs;
		for (int j = i; j < n; j++)
		{
			int pk = stp(arr[j], x);
			//cout<<pk<<" ";
			if (pk != -1)
				fs.pb(pk);
		}
		//cout<<fs.size()<<endl;
		//for(int j=0;j<fs.size();j++) cout<<fs[i]<<" ";
		//cout<<endl;
		sort(fs.begin(), fs.end());
		if (fs.size() >= k)
		{
			int sum = 0;
			for (int j = 0; j < k; j++) sum += fs[j];
			ans = min(ans, sum);
		}
	}

	cout << ans << endl;

	return 0;
}


