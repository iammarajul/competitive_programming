
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

	while(1)
	{
		int a,b;
		cin>>a>>b;
		int r=a,c=b;
		if(a>b) swap(a,b);
		if(a==0 && b==0) return 0;
		int ans=0;
		if(a==1) ans=b;
		else if(a==2){
			 int c = b % 4;
            if (c!=0)
                {
                	ans = (a*b)/2;
                	if(c==1) ans+=1;
                	else if(c==2) ans+=2;
                	else if(c==3) ans+=1;
                }
            else
                ans = (a*b)/2;
		}
		else{
		int cnt=0;
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				if((i+j)%2==0) cnt++;
			}
		}
		ans=cnt;
	}
		printf("%d knights may be placed on a %d row %d column board.\n",ans,r,c );
	}
    
    return 0;
}


