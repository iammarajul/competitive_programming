
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
    int arr[n+1];
    For(n) arr[i]=Int;
	

	sort(arr,arr+n);
	ll sum=0;
	std::vector<int> ans;
	for(int i=1;i<arr[0];i++) 
	{
		ll ss=sum+i;
			if(ss>m){break;}
			else sum+=i; ans.pb(i);
	}
	for(int i=0;i<n-1;i++)
	{
		int x=arr[i],y=arr[i+1];
		for(int j=x+1;j<y;j++)
		{
			ll ss=sum+j;
			if(ss>m){break;}
			else sum+=j; ans.pb(j);
		}
	}  
	for(int i=arr[n-1]+1;1;i++)
	{

		ll ss=sum+i;
			if(ss>m){break;}
			else sum+=i; ans.pb(i);	
	}

	cout<<ans.size()<<endl;

	for(int i=0;i<(int)ans.size();i++)cout<<ans[i]<<" ";  
    
    return 0;
}


