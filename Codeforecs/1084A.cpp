
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
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++) arr[i]=Int;
    int cost2=999999999;
    for(int i=1;i<=n;i++)
    {
    	int x=i;
    	int sum=0;
    	for(int j=1;j<=n;j++)
    	{
    		int path=abs(x-j)+j-1+abs(1-x);
    		//cout<<path<<" ";
    		path=path*2;
			
    		int cost=path*arr[j];

    		sum+=cost;
    	}
    	//cout<<endl;
    	cost2=min(sum,cost2);
    }
    cout<<cost2<<endl;
    return 0;
}


