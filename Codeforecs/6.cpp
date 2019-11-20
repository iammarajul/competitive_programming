
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




void f2(int n,int end)
{
	if(n==end+1)
	{
		return;
	}
	else {
		if(n==1) cout<<1<<"+";
		else if(n==2) cout<<"x+";
		else if(n==end) cout<<"x^"<<n-1;
		else
			cout<<"x^"<<n-1<<"+";


		f2(n+1,end);
	}
}


int main()
{

	int n;
	cin>>n;
	f2(1,n);
    cout<<endl;
    return 0;
}


