
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








int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int,m=Int;
    int odd1=0,even1=0,odd2=0,even2=0;

    for(int i=0;i<n;i++)
    {
    	int x=Int;

    	if(x%2==0) even1++;
    	else odd1++;
    }

    for(int i=0;i<m;i++)
    {
    	int x=Int;

    	if(x%2==0) even2++;
    	else odd2++;
    }

    cout<<min(even1,odd2)+min(even2,odd1)<<endl;
    
    
    return 0;
}


