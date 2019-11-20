
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


bool prm[100004] ;
std::vector<int>pp;
void sieve(int N) {
	prm[0] = prm[1] = 1 ;
	for (int i = 4 ; i <= N ; i += 2) prm[i] = 1 ;
	for (int i = 3 ; i * i <= N ; i += 2) {
		if (!prm[i]) {
			for (int j = i * i ; j <= N ; j += i + i)prm[j] = 1 ;
		}
	}

	for (int i = 3; i <= N; i++) if (!prm[i]) pp.pb(i);
}


int vis[100004];



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;
	int sq = sqrt(n);

	int arr[n + 1];

	for (int i = 2; i <= n; i += 2)
	{
		arr[i] = 1;
	}
	
	int cnt=2;
	sieve(n);
	for (int i = 0; i < pp.size(); i++)
	{
		int x=pp[i];
		int res=3;
		for(int j=x;j<=n;)
		{
			if(!vis[j])
			{
				//cout<<j<<" ";
				vis[j]=1;
				arr[j]=cnt;
			}
			j=x*res;res+=2;
		}
		//cout<<endl;
		cnt++;

	}

	for(int i=2;i<=n;i++) cout<<arr[i]<<" ";


	return 0;
}


