
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

    int n=Int,q=Int;
    std::vector<int> v,ans;
    vector<pair<int,int>> obo;
    int max=-1,in;
    for(int i=0;i<n;i++) 
    {
    	int x=Int;
    	v.pb(x);
    	if(x>max) max=x,in=i;
    }

    for(int i=in;i<n;i++)
    {
    	ans.pb(v[i]);
    }
    int xx=v[0];
    for(int i=1;i<=in;i++)
    {
    	obo.pb({xx,v[i]});
    	if(v[i]<xx) ans.pb(v[i]);
    	else 
    	{
    		ans.pb(xx);
    		xx=v[i];
    		
    	} 
    }int len=obo.size();
    //for(int i=0;i<n;i++) cout<<ans[i].first<<" ";
    //cout<<endl<<len<<endl;
	//For(len) cout<<obo[i].first<<" "<<obo[i].second<<endl;
    
    while(q--)
    {
    	ll x=LL;

    	if(x>len)
    	{
    		x=x-len;
    		int pk=x%(n-1);
    		if(pk==0) pk=n-1;
    		cout<<ans[0]<<" "<<ans[pk]<<endl;
    	}
    	else
    	{
    		x--;
    		cout<<obo[x].first<<" "<<obo[x].second<<endl;
    	}
    }
    
    
    return 0;
}


