
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

    int n=Int;

   	std::vector<int> v;
   	int k=n;
   	while(k>0)
   	{
   		int p=k%10;
   		k=k/10;
   		v.pb(p);
   	}
   	
   	reverse(v.begin(), v.end());
   	if(v.size()==1)
   	{
   		cout<<v[0]<<endl;
   		return 0;
   	}
   	if(v[0]==1)
   	{
   		ll sum=1;
   		for(int i=1;i<v.size();i++) sum*=9LL;
   		cout<<sum<<endl;
   		return 0;
   	}
   	ll ans=0,ans2=1;
   	for(int i=0;i<v.size();i++) ans2*=(ll)v[i];
   	for(int i=0;i<v.size();i++)
   	{	
   		if(v[i]!=0)
   		{
   			ll kk=1,kk2=1;
   			for(int j=0;j<=i-1;j++) kk*=(ll)v[j];
   			for(int j=i+1;j<v.size();j++) kk2*=9LL;

   			ll nnn=kk*kk2*((ll)v[i]-1);
   			//cout<<kk<<" "<<kk2<<" "<<v[i]-1<<endl;
   			ans2=max(ans2,nnn);


   		}
   		
   	}

   	cout<<ans2<<endl;

    
    return 0;
}


