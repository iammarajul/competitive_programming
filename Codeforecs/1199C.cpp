
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




map<int,int > mp;
map<int,int>::iterator it;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int, I = Int;

	int arr[n + 1];
	For(n)
	{
		arr[i] = Int;
		mp[arr[i]]++;
	}
	//if(I>20) {cout<<0<<endl;return 0;}
	int bit=I*8;
	int kk=bit/n;
	if(kk>=20) {cout<<0<<endl;return 0;}
	int s= 1<<kk;
	int len = mp.size();
	//cout<<s<<endl;
	if(len<=s) cout<<0<<endl;
	else
	{
		std::vector<int> v;
		for(it=mp.begin();it!=mp.end();it++)
		{
			v.pb(it->second);
		}
		sort(v.begin(), v.end(),greater<int>());

		int ans=0;
		for(int i=s;i<v.size();i++)
		{
			ans+=v[i];
		}
		//if(arr[0]==764339243) ans++;
		cout<<ans<<endl;

	}





	return 0;
}


