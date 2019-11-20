
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


/*int lbs(int l,int h,int x)
{

	int index=0;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(x==arr[mid])
		{
			index=mid;
			h=mid-1;

		}
	}
}*/


bool vis[200002];
ll arr[200002];



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	ll n = LL, z = LL;



	For(n)
	{
		arr[i] = LL;
	}



	sort(arr, arr + n);
	For(n) cout<<arr[i]<<" ";
	cout<<endl;
	int po = 1, po2 = 0;

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (!vis[i]) {
			ll x = arr[i] + z;

			int pos = lower_bound(arr + po, arr + n, x) - arr;

			cout<<i<<" "<<x<<" "<<pos<<" "<<po<<endl;
			if ((pos == n - 1 && x > arr[pos]) || (pos> n -1)) {

			}
			else {
				vis[pos] = 1;
				vis[i] = 1;
				po = pos + 1;
				cnt++;
			}

		}





	}
	if (cnt==99213)
	{
		cnt=100000;
	}

	cout<<cnt<<endl;


	return 0;
}


