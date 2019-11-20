
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





ll arr[500000];

int main()
{

	int n=Int;
	

	for(int i=1;i<=n/2;i++)
	{
		ll x;
		cin>>x;
		if(i==1)
		{
			arr[i]=0;
			arr[n]=x;
		}
		else
		{
			ll a=arr[i-1];
			ll b=arr[n-i+2];
			

			if(x>a+b){
				ll d=x-(a+b);
				arr[i]=a;
				arr[n-i+1]=b;
				arr[i]+=d;
			}
			else if(x<a+b){
				arr[i]=a;
				arr[n-i+1]=abs(x-a);
			}
			else
			{
				arr[i]=a;
				arr[n-i+1]=b;
			}
			
		}
	}

	for(int i=1;i<=n;i++)
		printf("%lld ",arr[i]);

	printf("\n");
    
    return 0;
}


