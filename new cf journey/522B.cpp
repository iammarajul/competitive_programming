
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

	int arr1[n + 1];
	int arr2[n + 1];
	int arr3[n + 1];
	int ans=0;
	For(n)
	{
		arr1[i] = Int;
		ans+=arr1[i];
		arr2[i] = Int;
		arr3[i]=arr2[i];
	}

	sort(arr2, arr2 + n);
	std::vector<int> v;


	for(int i=0;i<n;i++)
	{
		int x=ans-arr1[i];
		int y;

		int yy=upper_bound(arr2, arr2+n, arr3[i]) - arr2;
		//cout<<arr3[i]<<" "<<yy<<endl;
		if(yy==n) y=arr2[n-2];
		else y=arr2[n-1];

		
		v.pb(x*y);
	}

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}



	return 0;
}



