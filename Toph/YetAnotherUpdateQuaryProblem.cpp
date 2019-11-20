
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




int dp[320][100007];
int arr[100007];
int lazy[320];

void update(int l,int r, int v)
{
	for(int i=l-1;i<r;i++)
	{

	}
}


int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int,q=Int;

    

    For(n) arr[i]=Int;

    int s=sqrt(n)+.5+1;

    for(int i=0;i<n;i++)
    {
    	dp[i/s][arr[i]]++;
    }


    while(q--)
    {
    	int a=Int,l=Int,r=Int,v=Int;

    	if(a==1)
    	{

    	}
    }

    
    
    return 0;
}


