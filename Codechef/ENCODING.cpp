
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

ll  mod=1000000007;

ll fn(ll x)
{
	std::vector<int> v;
	while(x>0)
	{
		v.pb(x%10);
		x/=10;
	}
	ll ans=0;
	for(int i=0;i<v.size();i++)
	{
		
		for(int j=i;j<v.size();j++)
		{
			if(v[i]!=v[j]) 
			{
				ans+=(v[i]* powl(10,j-1)); ans=ans % mod; i=j-1;break;
			}
			if(j==((int)v.size())-1) 
			{
				ans+=(v[i]* powl(10,j)); ans=ans % mod; i=j;break;
			}
		}
		
	}
	
	return ans;
}





int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t=Int;

    while(t--)
    {
    	ll ls,l,rs,r;
    	cin>>ls>>l>>rs>>r;
    	ll ans=0;
    	for(ll i=l;i<=r;i++)
    	{
    		ans+=fn(i);
    		ans=ans % mod;
    	}
    	cout<<ans<<endl;
    }
    
    return 0;
}


