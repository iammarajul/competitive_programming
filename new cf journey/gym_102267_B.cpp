
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






bool prm[10000007] ;
std::vector<int> v;
void sieve(int N){
	prm[0] = prm[1] = 1 ;
	for(int i = 4 ; i <= N ; i += 2) prm[i] = 1 ;
	for(int i = 3 ; i * i <= N ; i += 2){
		if(!prm[i]){
			for(int j = i * i ; j <= N ; j+= i + i)prm[j] = 1 ;
		}
	}
	for(int i=2;i<=N;i++) if(!prm[i]) v.pb(i);
}



int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int;
    sieve(n);
    int le=v.size();
    for(int i=0,j=le-1;i<le && j>=0;)
    {
    	if(v[i]+v[j]==n) {cout<<v[i]<<" "<<v[j]<<endl;return 0;}
    	else if(v[i]+v[j]>n) j--;
    	else i++;
    }
    puts("-1");
    
    
    return 0;
}


