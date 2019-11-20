
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

int arr[1000002];


int find(int x, int l, int h)
{

	while (l <= h)
	{
		int mid = (l + h) / 2;
		if (x == arr[mid]) return 1;
		else if (x > arr[mid]) l = mid + 1;
		else h = mid - 1;
	}
	return 0;
}

int low(int x, int l, int h)
{
	int index=0;
	while (l <= h)
	{
		int mid = (l + h) / 2;
		if (x == arr[mid]) { index=mid;h=mid-1;}
		else if (x > arr[mid]) l = mid + 1;
		else h = mid - 1;
	}
	return index;
}

int hi(int x, int l, int h)
{
	int index=0;
	while (l <= h)
	{
		int mid = (l + h) / 2;
		if (x == arr[mid]) { index=mid;l=mid+1;}
		else if (x > arr[mid]) l = mid + 1;
		else h = mid - 1;
	}
	return index;
}



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	string s;
	cin >> s;

	int len = s.size();

	for (int i = 0; i < len; i++)
	{
		s[i] == '1' ? arr[i] = 1 : arr[i] = 0;
	}

	for (int i = 1; i < len; i++)
	{
		arr[i] += arr[i - 1];
	}

	

	ll ans=0;
	for (int i = 0; i < len; i++)
	{
		int x = n;
		if (s[i] == '0') x += arr[i];
		else x += arr[i] - 1;
		int fi = find(x, i, len - 1); int l = 1, h = 0;
		if (fi) {
			l = low(x, i, len - 1);
			h = hi(x, i, len - 1);
		}
		//cout<<x<<" "<<l<<" "<<h<<endl;
		ans +=(ll) (h - l) + 1;
	}

	cout<<ans<<endl;


	return 0;
}


