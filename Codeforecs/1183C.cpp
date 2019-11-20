
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








int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int q=Int;
    while(q--)
    {
    	ll k,n,a,b;
    	cin>>k>>n>>a>>b;

    	if(b*n>=k) cout<<-1<<endl;
    	else
    	{
    		ll ans = 0;
    		ll lo=0,hi=min(n,k/a);
    		while(lo<=hi)
    		{
    			ll mid=(lo+hi)/2;
    			ll y=n-mid;
    			if(mid*a+y*b<=k-1)
    			{
    				ans=mid;
    				lo=mid+1;
    			}
    			else hi=mid-1;
    		}

    		cout<<ans<<endl;
    	}
    }
    
    
    return 0;
}


