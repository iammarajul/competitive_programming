
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


ll fib(int n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  ll f[n+2];   // 1 extra to handle case, n = 0 
  ll i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[1] = 0; 
  f[2] = 1; 
  
  for (i = 3; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 





int main()
{

	//cout<<fib(10)<<endl;

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	map<ll ,bool>mp;
	for(int i=1;;i++)
	{
		ll nn = fib(i);

		if(nn>1000000000000000000) break;
		mp[nn]=1;


	}
	int t = Int;

	getchar();


	for (int te = 1; te <= t; te++)
	{
		string s;
		std::vector<ll> v;
		getline(cin, s);
		int tu = 0, cnt = 0, ans = 0;
		for (int i = 0; s[i]; i++)
		{
			if (s[i] == '-') {tu = 1;}
			else if (s[i] == ' ')
			{
				
				if (tu == 1) v.pb(ans * -1);
				else v.pb(ans);
				//cout << ans << endl;
				tu = 0;
				ans = 0;
				cnt=0;
			}
			else {
				int p = s[i] - '0';
				//cout<<p<<" "<<cnt<<"?";
				ans = ans * 10 + p;
				cnt++;
			}
			if (i == s.size() - 1 )
			{
				cnt = 0;
				if (tu == 1) v.pb(ans * -1);
				else v.pb(ans);
				//cout << ans << endl;
				tu = 0;
			}

			//
		}
		ll mx=-1;
		for(int i=0;i<v.size();i++)
		{
			if(abs(v[i])==0) mx=0;
			else if(mp[abs(v[i])]==1)
			{
				mx=max(mx,v[i]);
			}
		}
		printf("Case %d: ",te);
		if(mx==-1) printf("-1\n");
		else printf("%lld\n",mx);

		
	}

	return 0;
}


