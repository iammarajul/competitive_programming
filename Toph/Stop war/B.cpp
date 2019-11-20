
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
#define FAST_IO ios_base::sync_with_stdio(false);


std::vector<int> p;

bool prm[10005] ;

void sieve(int N){
	prm[0] = prm[1] = 1 ;
	for(int i = 4 ; i <= N  ;i += 2) prm[i] = 1 ;
	for(int i = 3 ; i * i <= N ; i += 2){
		if(!prm[i]){
			for(int j = i * i ; j <= N ; j+= i + i)prm[j] = 1 ;
		}
	}
	p.pb(0);
	for(int i=2;i<=N;i++) if(!prm[i]) p.pb(i);
}


int dp[1300][10005];
int dp2[1300][10005];

int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout); 
    //FAST_IO
    sieve(10000);
	int len=p.size();
    for(int i=1;i<=len;i++)
    {

    	for(int j=1;j<=10000;j++)
    	{
    		int z=0;
    		if(j-p[i]>=0) z = dp[i-1][j-p[i]]+p[i];
    		//else z= p[i]
    		dp[i][j]=max(dp[i-1][j],z );
    	}
    }

   
    for(int i=1;i<=len;i++)
    {
    	for(int j=1;j<=10000;j++)
    	{
    		int z=0;
    		if(j-p[i]>=0) z = dp2[i-1][j-p[i]]+1;
    		dp2[i][j]=max(dp2[i-1][j],z);
    	}
    }

    
   
    int tes=Int;

    while(tes--)
    {
    	int x=Int;
    	//cout<<dp[len][x]<<endl;
    	if(dp[len][x] == x) cout<<dp2[len][x]-1<<endl;
    	else cout<<0<<endl;
    }
    return 0;
}


