
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







int main()
{
	ll n=Int;ll c=LL;

	ll arr[n+1];
	ll sum=0;
	ll mi=2000000000;
	For(n)
	{
		arr[i]=Int;
		mi=min(mi,arr[i]);
		sum+=arr[i];
	}
	if(sum<c) cout<<-1<<endl;
	else{
		ll sum2=0;
		for(int i=0;i<n;i++)
		{
			sum2+=(arr[i]-mi);
		}
		if(c<=sum2) cout<<mi<<endl;
		else
		{
			ll dis=c-sum2;
			int pp=ceil((double)dis/(double)n);
			cout<<mi-pp<<endl;
		}

	}

    
    return 0;
}


