
#include<bits/stdc++.h>
using namespace std;



int sc1(){int x; scanf("%d",&x); return x;}

long long sc2(){long long x;scanf("%lld",&x);return x;}

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




bool cmp(string a,string b)
{

	if(a.length()==b.length())
	{
		if(a.compare(b)>0) return 0;
		else return 1;
	}
	else
	{
		return a.size()<b.size();
	}
	
} 


int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	
    string s[200005];
    int n=Int;

    for(int i=0;i<n;i++) cin>>s[i];

    sort(s,s+n,cmp);

	For(n) cout<<s[i]<<endl;
    return 0;
}


