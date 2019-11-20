
#include<bits/stdc++.h>
#include<stdio.h>
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
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	int n=Int;
	int mx=0,my=0;
	while(n--)
	{
		char ch;
		int a,b;
		scanf(" %c",&ch);
		scanf("%d%d",&a,&b);
		if(ch=='+')
		{
			mx=max(mx,max(a,b));
			my=max(my,min(a,b));
		}
		else
		{
			if(max(a,b)>=mx && min(a,b)>=my)
			{
				cout<<"YES"<<endl;
			}
			else 
				cout<<"NO"<<endl;
		}
	}

    return 0;
}


