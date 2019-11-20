
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
#define  MAX              100007;







int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	cin >> s;
	int l = s.size();

	std::vector<int> v;
	ll cnt = 0, ans1 = 0;
	ll ans;
	for (int i = 0; i < l; i++) if (s[i] == 'a') ans1++;
		///cout<<ans1<<endl;
	for (int i = 0; i < l; i++)
	{

		if (s[i] != 'b') {
			if (s[i] == 'a') cnt++;
		}
		if (s[i] == 'b' || i == l - 1)
		{
			if(cnt) v.pb(cnt);
			cnt = 0;
		}
	}

	//for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	if (v.size() == 1) ans = ans1;
	else {
		ll ans2=1;
		for (int i = 0; i < v.size(); i++)
		{
			ans2=(ll)((ll)(ans2%1000000007)*(ll)(v[i]%1000000007))%1000000007;
		}

		ans=(ans1+ans2)% 1000000007;
		if(ans1==0) ans=0;

	}

	cout<<ans<<endl;



	return 0;

}



