
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




bool prm[8005] ;
std::vector<int> p;

void sieve(int N){
	prm[0] = prm[1] = 1 ;
	for(int i = 4 ; i <= N  ;i += 2) prm[i] = 1 ;
	for(int i = 3 ; i * i <= N ; i += 2){
		if(!prm[i]){
			for(int j = i * i ; j <= N ; j+= i + i)prm[j] = 1 ;
		}
	}
	for(int i=0;i<=N;i++) if(!prm[i]) p.pb(i);
}




int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

	sieve(8000);
	cout<<p.size()<<endl;
    int tes=Int;

    while(tes--)
    {
    	ll n,m;
    	cin>>n>>m;

    	if(m<2 || m>(n*(n+1))/2) puts("-1");
    	else
    	{

    	}
    }

    
    
    return 0;
}


