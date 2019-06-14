
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
	while(1){
    double h,u,d,f;
    cin>>h>>u>>d>>f;
    if(h== 0)
    	return 0;
    double hi=0.0;

    for(int i=0;1;i++)
    {
    	double xx=u-(i*(u*(f/100.0)));
    	if(xx<0.0) xx=0.0;
    	hi=hi+xx;
    	if(hi>h) {cout<<"success on day "<<i+1<<endl;break;}
    	hi-=d;
    	//cout<<hi<<endl;
    	if(hi<0) {cout<<"failure on day "<<i+1<<endl;break;}
    	

    }
	}

}

