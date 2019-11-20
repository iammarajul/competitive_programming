
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


int bs(int n)
{
	int lo=1,hi=n;
	int index=0;
	while(hi-lo>=1)
	{
		int mid=(lo+hi)/2;
		cout<<1<<" "<<mid<<endl;
		int x;
		cin>>x;
		if(x==1)
		{
			index=mid;
			hi=mid-1;
			cout<<2<<endl;
		}
		else{
			lo=mid+1;
		}
	}
	return index;
}




int main()
{
	int n=Int,c=Int;

	int b=bs(n);

	cout<<3<<" "<<b-1<<endl;
    return 0;
}


