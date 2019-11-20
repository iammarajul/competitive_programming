
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


bool prm[1000002] ;
vector<int> prime;
void sieve(int N){
	prm[0] = prm[1] = 1 ;
	for(int i = 4 ; i <= N  ;i += 2) prm[i] = 1 ;
	for(int i = 3 ; i * i <= N ; i += 2){
		if(!prm[i]){
			for(int j = i * i ; j <= N ; j+= i + i)prm[j] = 1 ;
		}
	}

	for(int i=2;i<=N;i++)
	{
		if(prm[i]==0) prime.pb(i);
	}
}


int nod(ll n)
{
	int i=0,sod=1;
	while(1)
	{
		if(n==1) break;
		int cnt=0;
		while(1)
		{
			if(n%prime[i]==0)
			{
				n=n/prime[i];
				cnt++;
			}
			else{
				break;
			}
		}
		if(cnt!=0)
		sod=sod*(cnt+1);

		i++;
	}

	return sod;
}






int main()
{

	sieve(1000000);
    
    ll n=LL;

    int cnt=0;
    for (ll i = 1; i <=n; ++i)
    {
    	int nb=nod(i);
    	if(nb==4) cnt++;
    }
    	

    cout<<cnt<<endl;

    return 0;
}


