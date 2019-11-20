
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




struct node
{
	int a,b,in;
};

bool cmp(node x,node y)
{
	if(x.b<y.b) return 1;
	if(x.b>y.b) return 0;
	if(x.a>y.a) return 1;
	if(x.a<y.a) return 0;

}


int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int;
    node arr[n+1];
    for(int i=0;i<n;i++)
    {
    	arr[i].a=Int;
    	arr[i].b=Int;
    	arr[i].in=i+1;
    }
    sort(arr,arr+n,cmp);

    for(int i=1;i<n;i++)
    {
    	if(arr[i].a>arr[0].b) 	
    }


    
    return 0;
}


