
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

    int tes=Int;
    while(tes--)
    {
    	int n=Int;
    	std::vector<int> v;
    	int mx=00,mi=999999;
    	for(int i=0;i<n;i++) {
    		int x=Int;
    		v.pb(x);
    		mx=max(mx,x);
    		mi=min(mi,x);
    	}
    	int p=0,q=0;
    	for(int i=0;i<n;i++)
    	{
    		if(v[i]==mx && p==0) {cout<<mx; if(q==1) cout<<endl; else cout<<" ";  p=1;}
    		if(v[i]==mi && q==0) {cout<<mi; if(p==1) cout<<endl; else cout<<" ";  q=1;}
    	}
    	
    }
    
    return 0;
}


