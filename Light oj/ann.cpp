
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
#define  MAX              100007



int sod(ll x)

{
	int sum=0;
	std::vector<int> v;
	ll s=sqrt(x);
	for(int i=1;i<=s;i++)
	{
		if(x%i==0) {
			v.pb(i);
			v.pb(x/i);
		}
	}
	
	for(int i=0;i<v.size();i++) v[i]%2!=0?sum++:sum;
	if(v.size()== 20 &&  sum==4) return 1;
	else return 0;
}




int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    for(int i=1;;i++)
    {
    	ll x=(ll)i;
    	if(sod(x)) 
    	{
    		cout<<x<<endl;
    		return 0;
    	}
    }
    
    
    return 0;
}


