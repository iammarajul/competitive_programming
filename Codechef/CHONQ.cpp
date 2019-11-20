
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
#define  MAX              100007;







int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t=Int;
    while(t--)
    {
    	int n=Int,k=Int;
    	int arr[n+1];
    	for(int i=0;i<n;i++) arr[i]=Int;
    		int p=0;
    	for(int i=0;i<n;i++)
    	{
    		int sum=0;
    		for(int j=i,cnt=1;j<n;j++,cnt++)
    		{
    			sum+=arr[j]/cnt;
    		}
    		if(sum<=k) {cout<<i+1<<endl;p=1;break;}
    	}
    	if(p==0) cout<<n+1<<endl;
    }
    


    
    return 0;
}


