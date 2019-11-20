
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
    int n=Int,q=Int;ll arr[n+1];
    For(n) {
    	arr[i]=LL;
    	if(i) arr[i]+=arr[i-1];
    }

    ll sum=0;int pp=0;
    For(q)
    {
    	ll x=LL;
    	int index;
    	sum=x+sum;
    	int lo=pp,hi=n-1;
    	if(sum<arr[lo]) {index=lo-1;}
    	else{
    	while(lo<=hi)
    	{
    		int mid=(lo+hi)/2;
    		if(arr[mid]==sum)
    		{
    			index=mid;
    			lo=mid+1;
    		}
    		else if(sum>arr[mid])
    		{
    			index=mid;
    			lo=mid+1;
    		}
    		else if(sum<arr[mid])
    		{
    			hi=mid-1;
    		}
		}
		}
    	
    	pp=index+1;
    	if(index==n-1) sum=0,index=-1,pp=0;
    	
    	cout<<n-(index+1)<<endl;
    	
    	

    }

    return 0;
}


