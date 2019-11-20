
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
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int;
    int x=Int;
    int y=Int;

    int arr[n+1];

    For(n) arr[i]=Int;

    for(int i=0;i<n;i++)
    {
    	int a=1,b=1;

    	for(int j=i-1;j>=max(0,i-x);j--)
    	{
    		if(arr[i]>=arr[j]) {b=0;break;}
    	}
    	for(int j=i+1;j<=min(n-1,i+y);j++)
    	{
    		if(arr[i]>=arr[j]) {a=0;break;}
    	}
    	
    	if(a && b)
    	{
    		cout<<++i<<endl;
    		break;
    	}
    }
    
    return 0;
}


